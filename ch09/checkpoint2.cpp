#include <iostream>
using namespace std;

int main()
{
    const int N=10;
    int numbers[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i=0; i<N; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}