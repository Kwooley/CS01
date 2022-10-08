// array insertion


#include	<iostream>
#include	<iomanip>
using 	namespace	std;

void	insertone(int [], int &, int);
void	deleteone(int [], int &, int);
void	printout(int [], int);


int 	main()
{
	const	int SIZE=100;
	int 	usernum;
	int 	length=10;
	int 	number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

	cout << "Enter the number to insert\n";
	cin	>> usernum;
	printout(number, length);
	insertone(number, length, usernum);
	printout(number, length);

	cout << "Enter the number to delete\n";
	cin >> usernum;
	deleteone(number, length, usernum);
	printout(number, length);
}
void	insertone(int number[], int &length, int usernum)
{
	
}
void	deleteone(int number[], int &length, int usernum)
{
	
}

void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}


