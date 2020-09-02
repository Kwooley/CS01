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
	ifstream	ifso;
	int			idx=0, j;

	ifso.open("students.txt");
	if (ifso) {
		idx = 0;
		while(ifso >> s[idx].id >> s[idx].name) {
			j = 0; s[idx].screcord.sum = 0;
			while( (j < NUMCOURSE) && (ifso >> s[idx].screcord.score[j]) ){
				s[idx].screcord.sum += s[idx].screcord.score[j] ;
				s[idx].screcord.avg = s[idx].screcord.sum / NUMCOURSE;
				j++;
			}
			idx++;
		}
	}
	return idx;
}
void	findusername(Students s[], int numofRecords, string username)
{
	int pos=0;
	cout << "Matched Records with " << username << endl;
	for(int i=0; i<numofRecords;i++){
		pos = s[i].name.find(username);
		if (pos!=string::npos)
			printrecord(s[i]);
	}
}
void	printrecord(const Students s)
{
		cout << s.id << "\t" << s.name << "\t"
			<< s.screcord.score[0] << "\t" << s.screcord.score[1] << 
			"\tsum:" << s.screcord.sum << "\taverage: "<< s.screcord.avg << endl;

}