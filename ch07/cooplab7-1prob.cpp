#include	<iostream>
#include	<ctime>
#include	<cstdlib>
#include	<iomanip>
using	namespace	std;

int		makearray(int []);
void	bubble(int [], int);
void	printout(int [], int);


const	int		SIZE = 100;

int			main()
{
	int		number[SIZE];
	int		last;

	last = makearray(number);
	printout(number, last);
	bubble(number, last);
	printout(number, last);
}

int	 	makearray(int	number[])
{
}
void	bubble(int number[], int last)
{
}
void	printout(int number[], int last)
{
}
