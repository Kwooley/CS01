#include	<iostream>
using namespace std;

int	main()
{
	const int N = 10;
	//* (1) Normal Initialization Method
	int numbers[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for(int i=0;i<N;i++){
		cout << numbers[i] << "\t";
	}
	cout << endl;
	//* (2) Partial Initialization.
	int numbers2[N] = {0, 1, 2}; //* All uninitalized elemnets will be set to zero.
	for(int i=0;i<N;i++){
		cout << numbers2[i] << "\t";
	}	
	cout << endl;

	//* (2) Partial Initialization : A way to set 0 for all elements
	int numbers3[N] = {0};
	//* The first element set to 0. And then all other elements also set to 0.

	//* (3) Implicit Initialization
	int numbers4[ ] = {0, 1, 2, 3, 4};

	for (int i=0;i<5;i++) {
		cout << numbers4[i] << "\t" ;
	}
	cout << endl;

	//* In this declaration, How we can know the exact number of elements?
	//* Because we declare with the empty size.
	cout << "size of array 4 " << sizeof(numbers4) << endl;
	cout << "The number of elements " << sizeof(numbers4) / sizeof(int) << endl;

}
