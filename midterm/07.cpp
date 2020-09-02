#include		<iostream>
#include		<fstream>
#include 		<string>
using	namespace std;

// The following functions have to be implemented.
void	retrievebyName(string, int year=2018);
void	retrievebyYear(int from=2018, int to=2018);
void	retrievebyState(string, int year=2018); 

string	getinputname(int &);
void	getinputyear(int &from, int &to);
string  getinputstate(void);

// The following functins are given. 
void	readall(void);
void	printouttitle(void);
void	printoutcontents(string, string, int, string, int);
string	getstatename(string);
string	getgender(string);
int		getyear(string);
string	getname(string);
int		getcount(string);

int	main()
{
	int 	choice, from, to, uyear;
	string	uname;

	cout << "Enter your input\n";
	cout << "0: Read All Data\t 1: Retrieve be Name\t 2: Retrieve by Year\t 3:Retrieve by State\n";
	cin >> choice;
	switch(choice) {
		case 0:
				readall();
				break;
		case 1:
				uname = getinputname(uyear);
				retrievebyName(uname, uyear);
				break;
		case 2: 
				getinputyear(from, to);
				retrievebyYear(from, to);
				break;
		case 3:
				uname=getinputstate();
				retrievebyState(uname, 2018);
				break;
		default:
				exit(0);
	}
}

string	getinputname(int &year)
{
	string	name;
	cout << "Enter the name that you want to retrieve\n";
	cin  >> name;
	cout << "Enter the year\n";
	cin  >> year;
	return name;
}
void	getinputyear(int &from, int &to)
{
	cout << "Enter the year range\n";
	cin  >> from >> to;
	return;
}
string	getinputstate(void)
{
	string	sname;
	cout << "Enter the state name\n";
	cin  >> sname;
	return sname;
}
void	retrievebyName(string uname, int uyear)
{
	fstream		ifso;
	int			cnt=0, count, year;
	string		str, statename, sex, name;

	ifso.open("cany.txt", fstream::in);
	if (!ifso) {
		cout << "Open Error\n";
		exit(0);
	}
	printouttitle();
	while(ifso >> str)
	{
		statename 	= getstatename(str);
		sex			= getgender(str);
		year		= getyear(str);
		name 		= getname(str);
		count		= getcount(str);
		
		if (name.rfind(uname, 0) == 0 && year >= uyear) {
			printoutcontents(statename, sex, year, name, count);
			cnt++;
		}
	}
	cout << "Total Lines = " << cnt << endl;

}

void	retrievebyYear(int from, int to)
{
	fstream		ifso;
	int			cnt=0, count, year;
	string		str, statename, sex, name;

	ifso.open("cany.txt", fstream::in);
	if (!ifso) {
		cout << "Open Error\n";
		exit(0);
	}
	printouttitle();
	while(ifso >> str)
	{
		statename 	= getstatename(str);
		sex			= getgender(str);
		year		= getyear(str);
		name 		= getname(str);
		count		= getcount(str);
		
		if (year >= from && year <= to) {
			printoutcontents(statename, sex, year, name, count);
			cnt++;
		}
	}
	cout << "Total Lines = " << cnt << endl;	
}

void	retrievebyState(string stname, int uyear)
{
	fstream		ifso;
	int			cnt=0, count, year;
	string		str, statename, sex, name;

	ifso.open("cany.txt", fstream::in);
	if (!ifso) {
		cout << "Open Error\n";
		exit(0);
	}
	printouttitle();
	while(ifso >> str)
	{
		statename 	= getstatename(str);
		sex			= getgender(str);
		year		= getyear(str);
		name 		= getname(str);
		count		= getcount(str);
		
		if (statename == stname && year == uyear) {
			printoutcontents(statename, sex, year, name, count);
			cnt++;
		}
	}
	cout << "Total Lines = " << cnt << endl;	
}

void	readall(void)
{
	ifstream		ifso;
	int			cnt, count, year;
	string		str, statename, sex, name;

	ifso.open("cany.txt", fstream::in);
	if (!ifso) {
		cout << "Open Error\n";
		exit(0);
	}
	cnt = 0;
	printouttitle();
	while(ifso >> str)
	{
		statename 	= getstatename(str);
		sex			= getgender(str);
		year		= getyear(str);
		name 		= getname(str);
		count		= getcount(str);
		// if (year == 2018 && count > 1000 && statename == "CA") {
			
			printoutcontents(statename, sex, year, name, count);
			cnt++;
		// }
	}
	cout << "Total Lines are: " << cnt << endl;
	for(int i=0; i<100;i++)
			cout << '=';
	cout << endl;
}
void	printouttitle(void)
{
	cout << "State\t Sex\t Year\t Name\t\t Count\n";
}
void	printoutcontents(string statename, string sex, int year, string name, int count)
{
	cout << setw(5) << statename << "\t";
	cout << setw(3) << sex << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}
string 		getstatename(string str)
{
	return 	str.substr(0,2);
}
string 		getgender(string str)
{
	int 	pos = str.find(',');
	return 	str.substr(pos+1, 1);
}
int 		getyear(string str)
{
	int		startpos, pos;
	int		yearlen=4;
	int		year;
	startpos = 0;
	for(int i=0; i<2; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	year = stoi(str.substr(pos+1, yearlen));
	return year;

}
string 		getname(string str)
{	
	int		startpos, pos, endpos;
	startpos = 0;
	for(int i=0; i<3; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	endpos = str.find(',', startpos);
	return str.substr(startpos, endpos-startpos);

}
int 		getcount(string str)
{
	int		startpos, pos, count;
	
	startpos = 0;
	for(int i=0; i<4; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	count = stoi(str.substr(startpos, str.length()));
	return count;

}