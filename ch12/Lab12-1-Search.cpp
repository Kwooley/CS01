// Chapter 12. Advanced File Operations
// Lab 12-1. Search by the Keyword.


#include	<iostream>
#include	<iomanip>
#include 	<fstream>
#include	<string>
using  namespace	std;

struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

void 	printAllRecords(void);
void	searchbystnameyear1(void);
void	searchbystnameyear2(void);
void 	searchthemostpopular(void);
void 	print10threcords(void);

int		main()
{
	int		userchoice;
	

	do{	
		cout << "Choose One.\n\tPrint all : 0\n\tState and Year: 1\n\tState and the Range of Year:2\n\tThe most popular name in the state:3\n\tEvery 10th records:4\n\tQuit:-1\n";
		cin >> userchoice;
		switch(userchoice){
			case 0:
					printAllRecords();
					break;
			case 1:
					searchbystnameyear1();
					break;
			case 2:
					searchbystnameyear2();
					break;
			case 3:
					searchthemostpopular();
					break;
			case 4:
					print10threcords();
					break;
			default:
				break;
		}
	} while(userchoice != -1);

}

void printAllRecords()
{
	ifstream	ifso;
	string		readline;
	Namerecords nr;
	int			cnt=0;

	ifso.open("namerecords.bin", fstream::in);
	if(!ifso){
		cout << "Open Error\n";
		exit(0);
	}
	while(ifso.read((char *)&nr, sizeof(nr))){
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
		cnt++;
	}
	cout << "Total " << cnt << " lines read from the file\n";
}
void searchbystnameyear1()
{
	ifstream	ifso;
	string		userstname;
	Namerecords nr;
	int			cnt=0, useryear;

	ifso.open("namerecords.bin", fstream::in);
	if(!ifso){
		cout << "Open Error\n";
		exit(0);
	}
	cout << "Enter the state name and year that you want to search\n";
	cin >> userstname >> useryear;
	while(ifso.read((char *)&nr, sizeof(nr))){
		if ( (nr.stname == userstname) && (nr.year == useryear) ){
			cout << setw(5) << nr.stname << "\t";
			cout << setw(3) << nr.sex << "\t";
			cout << setw(5) << nr.year << "\t";
			cout << setw(10) << nr.name << "\t\t";
			cout << setw(5) << nr.count << endl;
			cnt++;
		}
	}
	cout << "Total " << cnt << " lines read from the file\n";
}

void searchbystnameyear2()
{
	ifstream	ifso;
	string		userstname;
	Namerecords nr;
	int			cnt=0, useryear1, useryear2;

	ifso.open("namerecords.bin", fstream::in);
	if(!ifso){
		cout << "Open Error\n";
		exit(0);
	}
	cout << "Enter the state name and year that you want to search\n";
	cin >> userstname >> useryear1 >> useryear2;
	while(ifso.read((char *)&nr, sizeof(nr))){
		if ( (nr.stname == userstname) && (nr.year >= useryear1 && nr.year <= useryear2 ) ){
			cout << setw(5) << nr.stname << "\t";
			cout << setw(3) << nr.sex << "\t";
			cout << setw(5) << nr.year << "\t";
			cout << setw(10) << nr.name << "\t\t";
			cout << setw(5) << nr.count << endl;
			cnt++;
		}
	}
	cout << "Total " << cnt << " lines read from the file\n";
}
void searchthemostpopular()
{
	ifstream	ifso;
	string		userstname;
	Namerecords nr, maxrec;
	int			maxcnt=0;

	ifso.open("namerecords.bin", fstream::in);
	if(!ifso){
		cout << "Open Error\n";
		exit(0);
	}
	cout << "Enter the state name\n";
	cin >> userstname;
	while(ifso.read((char *)&nr, sizeof(nr))){
		if ( (nr.stname == userstname) ){
			if ( maxcnt < nr.count){
				maxcnt = nr.count;
				maxrec = nr;
			}
		}
	}
	cout << setw(5) << maxrec.stname << "\t";
	cout << setw(3) << maxrec.sex << "\t";
	cout << setw(5) << maxrec.year << "\t";
	cout << setw(10) << maxrec.name << "\t\t";
	cout << setw(5) << maxrec.count << endl;
	cout << "The most popular name in the " << userstname << " state\n";
}
void print10threcords()
{
	ifstream	ifso;
	string		readline;
	Namerecords nr;
	int			cnt=0;
	long		pos=0;

	ifso.open("namerecords.bin", fstream::in);
	if(!ifso){
		cout << "Open Error\n";
		exit(0);
	}
	while(ifso.read((char *)&nr, sizeof(nr))){
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
		pos += sizeof(nr) * 10;
		ifso.seekg(pos, ios::beg);
		cnt++;
	}
	cout << "Total " << cnt << " lines read from the file\n";
}
