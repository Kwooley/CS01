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
#include	<ctime>
#include	<cstdlib>
using namespace std;


int	main()
{
	ofstream 	ofs;
	int		i,N;
	int		rdnum;

	do {
		cout << "How many numbers do you want to store in a file\n";
		cin >> N;
	} while ( N <0);

	ofs.open("514.txt");

	srand(time(NULL));
	if (ofs) {
		for(i=0; i<N; i++) {
			rdnum = rand() % 100;
			cout << rdnum << " wrote into a file \n";
			ofs << rdnum << endl; 
		}
	}
	ofs.close();
}
