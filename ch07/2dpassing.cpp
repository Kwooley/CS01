#include			<iostream>
#include			<iomanip>
using	namespace	std;


void	print2Darray(double [][4]);

int		main()
{
	double		score[3][4] = { {100, 90, 80, 100},
								{100, 100, 80, 100},
								{100, 80, 90, 100}} ;
	print2Darray(score);
}

void	print2Darray(double M[][4]) {
	
	for(int	i=0;i<3; i++) {
		for(int j=0; j<4; j++)
			cout	<< setw(5) << M[i][j] ;
		cout << endl;
	}
}