#include		<iostream>
#include		<fstream>
#include 		<string>
using	namespace std;

int 		makeNameRecord(string [], string [], int [], string [], int []);
void		printoutallrecords(int, string [], string [], int [], string [], int []);
void		printnamewithA(int, string [], string [], int [], string [], int []);
void	printoutcontents(string , string , int , string , int );

const int N=5000;
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

	inputfile.open("babyname.txt", fstream::in);
	if (!inputfile) {
		cout << "Error with Opening the file\n";
		exit(0);
	}
	while(cnt < N){
		if ( inputfile >> state[cnt] >> gender[cnt] >> 	year[cnt] >> name[cnt] >> count[cnt] )	
			cnt++;
		else {
			cout << "Read Stop at line " << cnt << "\n";
			break;
		}
	}
	cout << cnt << " lines read from the name file\n";
	return cnt;
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

void 	printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	for(int i=0;i<cnt;i++){
		printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
	}
	cout << "total lines: " << cnt << endl;
}

void	printoutcontents(string statename, string sex, int year, string name, int count)
{
	cout << setw(5) << statename << "\t";
	cout << setw(3) << sex << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}
