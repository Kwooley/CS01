#include	<iostream>
using 	namespace	std;

int	main()
{
	int i,j;
	for(i=2;i<8;i++)                   // Make a Breakpoint Here.
	{
		for(j=2;j<=(i/j);j++)
			if ((i%j) == 0)    // Monitor the variable i, j, (i/j) at this point.
				break;
		if ( j > (i/j))		  // Make a Breakpoint Here.
			cout << i << " is Prime number \n";
	}
}
