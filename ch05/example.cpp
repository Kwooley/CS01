//Cris Allodoli 9/9/20

#include <iostream>
using namespace std;
int main()
{
        const int N = 5, M = 5;
        int i, j;
        for (i = 0; i < N; i++) {
                for (j = i; j < M - i; j++)
                        cout << " (" << i << "," << j << ") ";
                cout << endl;
        }
}