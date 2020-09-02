// Array initialization

#include	<iostream>
using namespace 	std;


int	main()
{
	int			i;
	int			numbers[ ] = { };

	for(i=0; i<5; i++)
		numbers[i] = i; 
	for(i=0; i<5; i++)
		cout << numbers[i] << endl;

	cout << sizeof(numbers) << " bytes\n";

}