#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int linearSearch(int [], int , int );
int binarySearch(int [], int , int );
void makeArray(int [] , int);
void printArray(int [] , int);
void bubbleSort(int [], int );

int main()
{
    const int N= 64;
    int array[N];
    int target;
    int total_linear, total_binary;

    srand(time(0));
    makeArray(array, N);
    printArray(array, N);

    for(int i=0; i<100; i++)
    {
        target = array[rand() % N];
        total_linear += linearSearch(array, N, target) ;
    }
    cout << "The average comparision numbers of Linear Search is " << total_linear / 100.0 << endl;

    bubbleSort(array, N);
    printArray(array, N);
    for(int i=0; i<100; i++)
    {
        target = array[rand() % N];
        total_binary += binarySearch(array, N, target) ;
    }
    cout << "The average comparision numbers of Binary Search is " << total_binary / 100.0 << endl;
    

}

void makeArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        array[i] = rand() % 100 + 1;
}
void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
    {
        cout << array[i]  << "\t" ; 
        if (i % 8 == 7 ) cout << endl;
    }
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
	}
}

int linearSearch(int array[], int N, int target)
{
   
}

int binarySearch(int array[], int N, int target)
{
 
}