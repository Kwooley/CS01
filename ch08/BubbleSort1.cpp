#include <iostream>
using namespace std;

void bubbleSort(int [], int );

int main()
{
	const int N = 10;
	int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};

	bubbleSort(array, N);
	for ( int v: array)
		cout << v << "\t";
	cout << endl;
}

void bubbleSort(int array[], int N)
{
	int min, index;
	for(int i=0; i < N-1; i++)
	{
		for(int j=0; j<N-i-1; j++)
		{
			if ( array[j] > array[j+1])
				swap(array[j], array[j+1]);
		}
		// for(int i=0;i<N;i++)
		// 	cout << array[i] << "\t";
		// cout << endl;
	}
}