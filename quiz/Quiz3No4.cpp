// Quiz 3 No 4.


#include	<iostream>
#include	<iomanip>
#include	<cstdlib>
#include 	<ctime>

using namespace std;

void	printout(int [], int);
int		pushBack(int [], int, int);
int		popBack(int [], int);

const int	SIZE=10;

int	main()
{
	int		numbers[SIZE] = {25, 15, 20, 35, 5};
	int		rdnum, numelm, numoftry=5;

	numelm = 5;
	srand(time(NULL));

	printout(numbers, numelm);

	for(int i=0; i<numoftry; i++){
		rdnum = rand() % 100;
		numelm = pushBack(numbers, numelm, rdnum);
		printout(numbers, numelm);
	}
	for(int i=0; i<numoftry; i++){
		rdnum = rand() % 100;
		numelm = popBack(numbers, numelm);
		printout(numbers, numelm);
	}
}
void	printout(int numbers[], int numelm)
{	
	// print out all the contents of array numbers
	for(int i=0; i<numelm; i++)
		cout << setw(5) << numbers[i];
	cout << endl;
}
int		pushBack(int numbers[], int numelm, int rdnum)
{
	if ( numelm <= 10){
		cout << "The element " << rdnum << " is inserted to the last element\n";
		numbers[numelm] = rdnum;
		numelm += 1;
	}
	return numelm;
}
int		popBack(int numbers[], int numelm)
{
	if( numelm > 0){
		cout << "The last element " << numbers[numelm-1] << " is deleted\n";
		numbers[numelm-1] = 0;
		numelm -= 1;
	}
	return numelm;
}
