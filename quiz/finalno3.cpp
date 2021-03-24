// Final No. 3
// Given an integer array and an integer N, check if N exists in the array.

#include	<iostream>

using namespace std;

int findN(int [], int, int);
int main()
{
	const int SIZE = 10;
	int numbers[SIZE] = {2,5,3,1,4,8,9,7,6,10};
	int N = 8, ret;

	ret = findN(numbers, SIZE, N); 
	if(findN(numbers, SIZE, N)>0)
		cout << "Found " << numbers[ret] <<  " at " << ret << endl;
}
int findN(int numbers[], int SIZE, int N)
{
	for(int i=0; i<SIZE; i++){
		if ( numbers[i] == N) {
			return i;
			break;
		}
	}
	return -1;
}
