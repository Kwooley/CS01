// 		Lab 5-10 : Problem Definition
//		Write a program that calculates the summation of the certain range 
//				such that the summation is less than the user input number. 
//		The range starts from 0. Find the end of range that the summation is less than the user input. 
//		example 1 : user input = 10
//			[0,1,2,3] = 0+1+2+3 = 6 < 10
//			Answer = 3
//		example 2 : user input 15
//			[0,1,2,3,4] = 0+1+2+3+4= 10 < 15
//			Answer = 4


#include	<iostream>
#include	<iomanip>
using 	namespace  std;

int	main()
{
	int 	i=1, end;
	int	sum=0;

	cout << "Enter your input (the end of range)\n";
	cin >> end;
	
	while(1) {
		sum += i;
		if ( sum < end)
			cout << setw(5) << i ;
		else
			break;
		i++;
	}
	sum -= i;
	cout << endl;

	cout << "The summation of from 0 to " << i-1 << " is " << sum << endl;
	cout << setw(5) << sum ;
	cout << " is less than " << setw(5) << end << endl;
}






