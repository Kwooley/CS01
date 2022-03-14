#include <iostream>
using namespace std;

void printArrays(int *, int);
int main()
{
	const int N = 5;
	int numbers[] = {10, 20, 30, 40, 50};

	printArrays(numbers, N);
}

void printArrays(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *(arr + i) << endl;
	}
}