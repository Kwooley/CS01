//		Make a program that writes the given number N of integers to a file. 
//		The integers that we write to a file will be determined with random number generation. 
//		The number of integers N is determined by the user input. 
//		The generated N random number are stored into a file. 
//		- Program Requirements
//				User input for the number of integers.
//				generate the N random numbers.
//				Create and Open the text file.
//				Write N random numbers into a file.

#include	<iostream>
#include	<fstream>
using namespace std;


int	main()
{
	ifstream 	ifs;
	int		N=0, sum=0;
	int		rdnum;
	float		average;

	ifs.open("514.txt");

	if (ifs) {
		while ( ifs >> rdnum ) {
			cout <<  "\tRead Number from a file : " << rdnum << endl; 
			sum += rdnum;
			N++;
		}
		if ( N != 0) 
			average = sum / N;
	}
	cout << " The number of integers read from a file " << N << endl;
	cout << " Sum of all integers " << sum << endl;
	cout << " Average " << average<< endl;
}
