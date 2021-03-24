// 	Lab5-12 : Problem Definition
// 	Make a program that calculates the scores of students. 
// 	It asks the user for the number of students and the number of scores per student.
// 
// 	Program Requirements
//	 	User input for the nubmer of students and scores.
// 		Input the students name and N scores.
// 		Calculate the average score for each stuents
// 		Print out the student name, the sum of scores, and the average.

#include	<iostream>
#include	<iomanip>
using namespace std;

int main()
{
	int 	stuNum, scoNum;
	int	i,j;
	string	stuName;
	float	score;
	float	sum;
	float 	average;

	do {
		cout << "Enter the number of students and scores\n";
		cin >> stuNum >> scoNum;
	} while ( stuNum < 0 || scoNum < 0);

	for(i=0; i<stuNum; i++){
		sum = 0;
		cout << "Enter student's name\n";
		cin >> stuName;
		for(j=0; j<scoNum; j++) {
			cout << "Enter score " << j << endl;
			cin >> score;
			sum += score;
		}
		average = sum / scoNum;
		cout << "Student's Name : " << stuName << endl;
		cout << "\tSum of Scores : " << setw(5) << fixed << sum << endl;
		cout << "\tAverage of Scores : " << setw(5) << fixed << average << endl;
	}
}
