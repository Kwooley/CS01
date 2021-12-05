#include			<iostream>
#include			<iomanip>
using	namespace	std;


int		sum2d(int [][5], int, int);

int		main()
{

		const int 	NUM_ROWS = 5; // Number of rows
		const int 	NUM_COLS = 5; // Number of columns
		int 	ret = 0; 
		int 	numbers[NUM_ROWS][NUM_COLS] = {	{2, 7, 9, 6, 4},
												{6, 1, 8, 9, 4},
												{4, 3, 7, 2, 9},
												{9, 9, 0, 3, 1},
												{6, 2, 7, 4, 1}};

		ret = sum2d(numbers, NUM_ROWS, NUM_COLS);
		cout << "Total sum is :" << setw(5) << ret << endl;
}

int		sum2d(int num[][5], int rows, int cols)
{
	int		sum=0;
		
	for(int i=0; i<rows; i++)
		for(int	j=0; j<cols; j++){
			sum += num[i][j];
		}
	return sum;
}