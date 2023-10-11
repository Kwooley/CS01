#include <iostream>
using namespace std;

void selectionSort(int [], int );

int main()
{
	const int N = 10;
	int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};

	selectionSort(array, N);
	for ( int v: array)
		cout << v << "\t";
	cout << endl;
}

void selectionSort(int array[], int N)
{
	int min, index;
	for(int i=0; i < N-1; i++)
	{
		min = array[i];
		index = i;
		for(int j=i; j<N; j++)
		{
			if ( array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		// cout << "Min " << min << " index " << index << endl;
		swap(array[index], array[i]);
	}
}