
// Array initialization
#include	<iostream>
using namespace 	std;


int	main()
{
	int			i;
	int			numbers[ ] = {10, 20, 30, 40, 50};

	for(i=0; i<5; i++)
		numbers[i] = i; 
	for(i=0; i<5; i++)
		cout << numbers[i] << endl;

	cout << sizeof(numbers) << " bytes\n";

}