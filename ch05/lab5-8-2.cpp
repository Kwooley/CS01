// 		Lab 5-8.  Problem Definition
//
//		Write a program that finds the sequence of power of 2 in the given range.

//		Program Requirements
//		1)  One user input for the end of range. The starting range is fixed at 0.
//		2)  Range must be in  [0 - 1300].
//		3)  Print out "Not found" message if there is no power 2 in the given range.
//		4)  Use the for-loop and <cmath> pow function.
//			if you solve it, try again to use do-while or while-loop without pow() function.

#include	<iostream>
#include	<cmath>
#include	<iomanip>
using namespace std;

int	main()
{
	int 	i, flag=1;
	int 	end, pow=1;

	do{
		cout << " Enter your input(the end of range)\n";
		cin >> end;
	} while ( end < 0 || end > 1300);

	cout << "The sequence of 2 to power N in the range from 0 to " << end << endl;
	while (flag){
		pow *= 2;
		if ( pow < end) 
			cout << setw(8) << pow;
		else
			flag = 0;
	}
	cout << endl;
}
