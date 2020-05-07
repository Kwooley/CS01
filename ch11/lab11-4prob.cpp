// Chapter 11. Structured Data
// Enumerated Data Types
// Programming Lab 11-4
#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;

const	int 	MAXSIZE=1000;
struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

int		makingNameRecords(Namerecords []);
void	printNameRecords(Namerecords [], int);
string	getstatename(string);
string	getgender(string);
int		getyear(string);
string	getname(string);
int		getcount(string);

int main()
{
	int				numofRecords = 0;
	Namerecords 	nr[MAXSIZE];
	numofRecords = makingNameRecords(nr);
	printNameRecords(nr, numofRecords);
}
int		makingNameRecords(Namerecords nr[])
{
	return cnt;
}
void 		printNameRecords(Namerecords nr[], int numofRecords)
{
	for(int i=0; i<numofRecords; i++){
		cout << setw(5) << nr[i].stname << "\t";
		cout << setw(3) << nr[i].sex << "\t";
		cout << setw(5) << nr[i].year << "\t";
		cout << setw(10) << nr[i].name << "\t\t";
		cout << setw(5) << nr[i].count << endl;
	}
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
	return year;

}
string 		getname(string str)
{	

}
int 		getcount(string str)
{
	return count;

}





