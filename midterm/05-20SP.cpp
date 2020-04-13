#include	<iostream>
#include	<iomanip>
using	namespace	std;

void	reverseorder (int [], int);
void	printout   	 (int [], int);

const	int		SIZE = 10;

int			main()
{
	int		number[SIZE] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};

	reverseorder(number, SIZE);
	printout(number, SIZE);
}
void	printout(int number[], int SIZE)
{
	for(int i=0;i<SIZE; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}
void	reverseorder(int number[], int SIZE)
{
	for(int	i=0;i<SIZE/2;i++)
		swap(number[i], number[SIZE-i-1]);
}