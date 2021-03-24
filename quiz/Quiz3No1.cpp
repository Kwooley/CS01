// Quiz 3. No1.
//
#include 	<iostream>
#include	<iomanip>
using	namespace std;

int	main()
{
	const	int 	SIZE=10;
	int		number[SIZE] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
	int		diff[SIZE];
	int		sum = 0;

	for(int i=0;i<SIZE;i++)
		sum += number[i];

	for(int i=0;i<SIZE;i++)
		diff[i] = sum - number[i] ;

	for(int i=0; i<SIZE;i++)
		cout << setw(5) << number[i];
	cout << endl;
	for(int i=0; i<SIZE;i++)
		cout << setw(5) << diff[i];
	cout << endl;
}