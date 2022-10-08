
#include		<iostream>
#include 		<iomanip>
using namespace	std;

int 		main(){

	double		score1[3][4] = { {100, 90, 80, 100},
								{100, 100, 80, 100},
								{100, 80, 90, 100}} ;

	double		score2[3][4] = { 100, 90, 80, 100, 100, 100, 80, 100, 100, 80, 90, 100};


	int 	i,j;
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++)
			cout << setw(5) << score1[i][j];
		cout << endl;
	}

	for(i=0; i<3; i++) {
		for(j=0; j<4; j++)
			cout << setw(5) << score2[i][j];
		cout << endl;
	}

}