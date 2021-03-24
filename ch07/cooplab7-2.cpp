#include	<iostream>
#include	<ctime>
#include	<cstdlib>
#include	<iomanip>
using	namespace	std;

int		makearray(int []);
void	makemask(int [], int last);
void	applymask(int [], int [], int);
void	printout(int [], int);


const	int		SIZE = 100;

int		main()
{
		int		mask[SIZE];
		int		number[SIZE];
		int		last;

		last = makearray(number);
		printout(number, last);
		makemask(mask, last);
		printout(mask, last);

		applymask(number, mask, last);
		printout(number, last);
}
int	 	makearray(int	number[])
{
		int		last;
		srand(time(NULL));
		do {
			last = rand() % 20;
		} while (last < 10);

		for(int i=0; i<last; i++)
			number[i] = rand() % 100;
		return last;
}
void	 makemask(int	mask[], int last)
{
	int 	rdnum;
		for(int i=0; i<last; i++){
			 rdnum = rand() % 100;
			 mask[i] = (rdnum % 2)? 1 : 0;
		}
		
}

void	applymask(int number[], int	mask[], int last)
{
	for(int i=0; i<last; i++) {
		number[i] = (mask[i] && number[i]) ? number[i] : 0;
	}
}
void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}