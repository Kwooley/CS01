#include <iostream>
using namespace std;

void printValue(const int *);
int main()
{
    const int number=10;
    int i = 20;

    printValue(&number);
    printValue(&i);
}

void printValue(const int *n)
{
    const int N=100;
    cout << *n << endl;
    n = &N;
    cout << *n << endl;
}