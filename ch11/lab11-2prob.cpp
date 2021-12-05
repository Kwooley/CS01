// Chapter 11. Structured Data
// Programming Lab 11-2
// lab11-2.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;
const	int 	NUMCOURSE=2;
struct Student
{
	int		id;
	string	name;
	int 	score[NUMCOURSE];	
	int		sum;
	int		avg;
};
int		makingstructarray(Student []); // return value : the number of struct array
void	printout(const Student );
void	findusername(Student [],int, string);
int 	main()
{
	int		numofRecords=0;
	Student	s[50];
	string	username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	for(int	 i=0; i<numofRecords; i++)
		printout(s[i]);

	cout << "Enter user name to find in Student's records\n";
	cin	>> username;
	findusername(s, numofRecords, username);

}
int		makingstructarray(Student s[])
{

}
void	findusername(Student s[], int numofRecords, string username)
{
	
}
void	printout(const Student s)
{
	cout << s. id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;

}