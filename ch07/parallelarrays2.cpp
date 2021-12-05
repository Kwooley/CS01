#include		<iostream>
#include		<iomanip>
#include		<fstream>
using namespace	std;


int		main()
{
	ifstream	ifile;
	const int	NUM=10;
	int			i;
	int			score1[NUM];
	int			score2[NUM];
	string		name[NUM];

	ifile.open("students.txt");
	for(i=0;i<NUM; i++){
		if (!(ifile >> name[i] >> score1[i] >> score2[i] )) {
			cout << "Error with Reading\n";
			exit(0);
		}
	}

	for(i=0;i<NUM; i++){
		cout << "ID: " << i << " student's name " << name[i] ;
		cout << " score 1 :" << setw(5) << score1[i];
		cout << " score 2 :" << setw(5) << score2[i] << endl;
	}

}