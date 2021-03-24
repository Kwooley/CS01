// Final No. 5
// There are two arrays. Array1 and Array2.
// Check that Array2 includes the Array1. 
// In other words, Check that All elements of Arry1 are in the Array2

// If two arrays are sorted order, we could check the inclusion with one iteration.
// There is no dupliated numbers.

#include	<iostream>
using namespace std;

int main()
{
	const int SIZE1=5;
	const int SIZE2=10;
	int numbers1[SIZE1] = {2, 3, 5, 9, 10};
	int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

	int cnt=0;
	for(int i=0;i<SIZE2;i++){
		if (numbers2[i] == numbers1[cnt]) {
			//cout << "num2 i" << numbers2[i] << " num1[cnt] " << numbers1[cnt] << endl;
			if (cnt < SIZE1-1)
				cnt++;
			else
				cout << "Done\n";
		}
	}
}