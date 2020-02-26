#include        <iostream>
using   namespace       std;

//* Power number to p 
//* User input : N 
//* result = 2 ** N

int main()
{
    int         i=0, result=1, N, p;
    
    cout << "Enter the Power \n";
    cin >> N;
    cout << "Enter the base number";
    cin >> p;
    
    do {
            result *= p;
    } while(i++ < N) ;

    cout << "The result " << result << endl;
}