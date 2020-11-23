// Chapter 12. Advanced File Operations
// Lab 12-1. MakeBinFile


#include	<iostream>
#include 	<fstream>
#include	<sstream>
#include	<string>
using  namespace	std;

struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

void 	printNameRecords(Namerecords);
int		makeBinFile(void);


int		main()
{
	int		numrec;
	numrec = makeBinFile();
	cout << "Total " << numrec << " name records are created in the \"namerecords.bin\" file.\n" ;
}

int		makeBinFile(void)
{

	ifstream	ifso;
	ofstream	ofso;
	Namerecords nr;
	string 		buf, field;
	int			i=0, fcnt=0;
	stringstream ss;

	ifso.open("allstates.txt", fstream::in);
	ofso.open("namerecords.bin", fstream::out);
	if (!ifso || !ofso ){
		cout << "Open Error\n";
		exit(0);
	}

	while(ifso >> buf) {
		ss << buf;
		while(getline(ss, field, ',')) {
			switch(fcnt){
				case 0:
						nr.stname = field;
						break;
				case 1:
						nr.sex = field;
						break;
				case 2:
						nr.year = stoi(field);
						break;
				case 3:
						nr.name = field;
						break;
				case 4:
						nr.count = stoi(field);
						break;
			}
			fcnt = ++fcnt % 5;
		}
		ss.clear();
		ofso.write((char *)&nr, sizeof(nr));
		cout << i << "::" << sizeof(nr) << " bytes writing " ;
		printNameRecords(nr);
		i++;
	}
	return i;
}
void 		printNameRecords(Namerecords nr)
{
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
}