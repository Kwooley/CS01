#include		<iostream>
#include		<fstream>
#include 		<string>
using	namespace std;

void	readtest(void);
void	printout(string, string, int, string, int);
string	getstatename(string);
string	getgender(string);
int		getyear(string);
string	getname(string);
int		getcount(string);

int	main()
{
	readtest();
}

void	readtest(void)
{
	fstream		ifso;
	int			cnt, count, year;
	string		str, statename, sex, name;

	ifso.open("cany.txt", fstream::in);
	if (!ifso) {
		cout << "Open Error\n";
		exit(0);
	}
	cnt = 0;
	cout << "State\t Sex\t Year\t Name\t\t Count\n";
	while(ifso >> str)
	{
		statename 	= getstatename(str);
		sex			= getgender(str);
		year		= getyear(str);
		name 		= getname(str);
		count		= getcount(str);
		if (year == 2018 && count > 1000) {
			printout(statename, sex, year, name, count);
			cnt++;
		}
	}
	cout << "Total lines: " << cnt << endl;
}

void	printout(string statename, string sex, int year, string name, int count)
{
	cout << setw(5) << statename << "\t";
	cout << setw(3) << sex << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}

string 		getstatename(string str)
{
	int 	pos = str.find(',');
	return 	str.substr(0,pos);
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