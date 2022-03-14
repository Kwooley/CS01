#include <iostream>
using namespace std;

void printarrays(int *, int);
int main()
{
	const int N = 5;
	int numbers[] = {10, 20, 30, 40, 50};

	printarrays(numbers, N);
}

void printarrays(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *(arr + i) << endl;
	}
}