// Chapter 11. Structured Data.
// 
// Programming Lab 11- 1 
// lab11-1.cpp

#include	<iostream>
#include	<fstream>
using namespace	std;

const	int 	NUMCOURSE=2;
struct Student
{
	int		id;
	string	name;
	int 	score[NUMCOURSE];	
	int		sum;
	int		avg;
};

void	printout(const Student );

int	main()
{
	ifstream	ifso;
	Student	s;
	int		i=0, j;

	ifso.open("students.txt");
	if(ifso){
		while( ifso >> s.id >> s.name) {
			j = 0; s.sum = 0;
			while((j < NUMCOURSE) && (ifso >> s.score[j])){
				s.sum += s.score[j];
				j++;
			}
			s.avg = s.sum / NUMCOURSE;
			printout(s);
			i++;
		}
	}
}
void	printout(const Student s)
{
	cout << s. id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;

}