#include        <iostream>
#include        <cstdlib>
#include        <ctime>

using   namespace       std;

int main()
{
       int number,i, flag;

        cout << "Enter your number \n";
        cin >> number;

        for(i=2; i < number; i++)
        if( number % i ) {
                flag = 1;
                break;
        }
        if ( !flag )
                cout << number << " is the Prime Number \n";
        else
                cout << number << " is not a Prime Number \n";
}