// Final No. 6
// using the functiion


#include	<iostream>
using namespace std;

bool	check(int [], int [], int , int ); 

int main()
{
	const int SIZE1=5;
	const int SIZE2=10;
	int numbers1[SIZE1] = {2, 3, 5, 9, 10};
	int numbers2[SIZE2] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

	if( check(numbers1, numbers2, SIZE1, SIZE2))
		cout << "Numbers1 is a subset of Numbers2\n";
	else
		cout << "NUmbers1 is not a subset of Numbers2\n";
}

bool	check(int numbers1[], int numbers2[], int SIZE1, int SIZE2)
{
	int cnt=0;
	for(int i=0; i<SIZE2; i++){
		if ( numbers2[i] == numbers1[cnt] ){
			if ( cnt < SIZE1-1)
				cnt++;
			else
				return true;
		}
	}
	return false;
}