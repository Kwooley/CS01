#include		<iostream>
#include		<iomanip>
using namespace	std;


int		main()
{
	const	int	NUM=10;
	int		i;
	int		score1[NUM];
	int		score2[NUM];
	string	name[NUM];

	for(i=0;i<NUM; i++){
		cout << "Enter student's name and two scores\n";
		cin >> name[i] >> score1[i] >> score2[i];
	}

	for(i=0;i<NUM; i++){
		cout << "ID: " << i << " student's name " << name[i] ;
		cout << " score 1 :" << setw(5) << score1[i];
		cout << " score 2 :" << setw(5) << score2[i] << endl;
	}

}