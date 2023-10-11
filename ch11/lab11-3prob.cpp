// Chapter 11. Structured Data
// Programming Lab 11-3
// lab11-3.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;

const	unsigned short 	NUMCOURSE=2;
struct Scores {
	int	score[NUMCOURSE];
	int	sum;
	int	avg;
};
struct Students
{
	int		id;
	string	name;
	Scores	screcord;
};

int		makingstructarray(Students []); // return value : the number of struct array
void	printrecord(const Students);
void	findusername(Students [],int, string);

int main()
{
	int			numofRecords=0;
	Students	s[50];
	string	username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	for(int i=0;i<numofRecords;i++)
		printrecord(s[i]);

	cout << "Enter user name to find in Students's records\n";
	cin	>> username;
	findusername(s, numofRecords, username);

}
int		makingstructarray(Students s[])
{
	
}
void	findusername(Students s[], int numofRecords, string username)
{
	
}
void	printrecord(const Students s)
{
		cout << s.id << "\t" << s.name << "\t"
			<< s.screcord.score[0] << "\t" << s.screcord.score[1] << 
			"\tsum:" << s.screcord.sum << "\taverage: "<< s.screcord.avg << endl;

}