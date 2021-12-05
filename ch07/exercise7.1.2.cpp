#include	<iostream>
#include 	<cstdlib>
#include	<ctime>
using namespace std;

int	main()
{
	//* Now, let's make the code for taking user inputs into the arrays.
	const int N=10;
	int  numbers[N];

	srand(time(0));
	for(int i=0; i<N; i++){
		numbers[i] = rand() % 100;
	}
	//* print out all elements in array
	for(int i=0; i<N; i++){
		cout << numbers[i] << "\t" ;
	}
	cout << endl;
	
}
