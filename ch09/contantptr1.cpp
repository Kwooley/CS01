#include <iostream>
using namespace std;

void printArray(int *const, int);
int main()
{
    const int N = 10;
    int array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printArray(array, N);
}

void printArray(int *const n, int N)
{
    for (int i = 0; i < N; i++)
        cout << *(n + i) << "\t";
    cout << endl;
}