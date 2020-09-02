#include    <iostream>
using namespace std;

int main()
{
    const int N=3;

    for(int i=0; i<N; i++)
        for(int j=i; j<N; j++)
            cout << "(" << i << "," << j << ")\n";
}