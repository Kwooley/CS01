#include			<iostream>
#include			<iomanip>
using	namespace	std;


void		sum2dbyrow(int [], int [][5], int, int);

int		main()
{

		const int 	NUM_ROWS = 5; // Number of rows
		const int 	NUM_COLS = 5; // Number of columns
		int 	sum[NUM_ROWS] = {0}; 
		int 	numbers[NUM_ROWS][NUM_COLS] = {	{2, 7, 9, 6, 4},
												{6, 1, 8, 9, 4},
												{4, 3, 7, 2, 9},
												{9, 9, 0, 3, 1},
												{6, 2, 7, 4, 1}};

		sum2dbyrow(sum, numbers, NUM_ROWS, NUM_COLS);
		for(int i=0; i<NUM_ROWS; i++)
			cout << "Total sum of row :" << i << " is :" << setw(5) << sum[i] << endl;
}

void		sum2dbyrow(int sum[], int num[][5], int rows, int cols)
{
	for(int i=0; i<rows; i++)
		for(int	j=0; j<cols; j++) {
			sum[i] += num[i][j];
		}
}