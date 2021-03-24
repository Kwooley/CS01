#include	<iostream>
using 	namespace	std;

// Find the sequence of 2 to power of N between [begin , end] 
// Do not use <cmath> functions

int	main()
{
	int i,j;
	int begin, end, pow;

	cout <<  "Enter your input: Two integers\n";
	cin >> begin >> end;  // Let assume that inputs are begin = 10, end= 50

	//     2..4..8..[10]..16..32..[50]  Find 2 to power N between 10 and 50
		
	i=0; pow = 1;
	do     				
	{
		pow *= 2;      // BREAKPOINT HERE
		i += 1;
	}
	while( pow < begin) ;  // skip 2 to power N that are less than begin.     //BREAKPOINT HERE
	// the value of i is the exponent of 2, and 2**i is first number after begin.

	while ( pow < end)
	{
		cout << "2**" << i << "---" << pow << endl;      	// MONITOR VARIABLES i, pow
		pow *= 2;		// BREAKPOINT HERE
		i++;
	}
}
