#include		<iostream>
#include		<iomanip>
using	namespace	std;


int	main()
{
	const int 	SIZE = 5;
	int			i;
	int 		num1[SIZE] = {5, 10, 15, 4, 6};
	int 		num2[SIZE] = {5, 10, 15, 5, 6};	
	
	for(i=0; i<SIZE; i++ ) {
		if (num1[i] != num2[i])
			break;
	}
	if ( i != SIZE) 
		cout << "Two arrays are different from " << i << "th element\n";
	
}