#include		<iostream>
#include		<fstream>
#include 		<string>
using	namespace std;

int 		makeNameRecord(string [], string [], int [], string [], int []);
void		printoutallrecords(int, string [], string [], int [], string [], int []);
void		printnamewithA(int, string [], string [], int [], string [], int []);

void		printoutcontents(string, string, int, string, int);
string		getstatename(string);
string		getgender(string);
int			getyear(string);
string		getname(string);
int			getcount(string);

const int N = 100;
int		main()
{
	string	state[N];
	string	gender[N];
	int		year[N];
	string	name[N];
	int		count[N];
	int 	cnt;

	cnt = makeNameRecord(state, gender, year, name, count);
	printoutallrecords(cnt, state, gender, year, name, count);
	printnamewithA(cnt, state, gender, year, name, count);

}
int 	makeNameRecord(string state[], string gender[], int year[], string name[], int count[])
{
	ifstream		inputfile;
	string			readline;
	int 			cnt=0;

	inputfile.open("cany.txt", fstream::in);
	if (!inputfile) {
		cout << "Error with Opening the file\n";
		exit(0);
	}
	while((inputfile >> readline) && (cnt < N)){

		if ( getcount(readline) > 500 && getgender(readline) == "F" && getyear(readline) == 2018) {
			state[cnt] 	= getstatename(readline);
			gender[cnt]	= getgender(readline);
			year[cnt]	= getyear(readline);
			name[cnt]	= getname(readline);
			count[cnt]	= getcount(readline);
			cnt++;
		}
	}
	cout << cnt << " lines read from the name file\n";
	return cnt;
}
void 	printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	for(int i=0;i<cnt;i++){
		printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
	}
	cout << "total lines: " << cnt << endl;
}
void 	printnamewithA(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	int 	lines=0;
	cout << "The list of names in CA and starting with \"A\" \n";
	for(int i=0;i<cnt;i++){
		if (( name[i].rfind("A",0) == 0) && (state[i] == "CA")) {
			printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
			lines++;
		}
	}
	cout << "total lines: " << lines << endl;
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