#include        <iostream>
using   namespace       std;

//* Summation for user number 1, 2, 3, 4, 5

int main()
{
        int     sum=0, i=0, usernum;

        i = 0;
        while ( i < 5)
        {
                cout << "Enter user num\n";
                cin >> usernum;
                sum += usernum;
        }
        cout << " Summation result is " << sum << endl;

}