#include <iostream>
using namespace std;

void printArray(int * const);
int main()
{
    int number=10;

    printArray(&number);
}

void printArray(int * const n)
{
    int i=100;
    cout << *n << endl;

    n = &i;
    cout << *n << endl;
}