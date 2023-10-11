#include        <iostream>
#include        <cstdlib>
#include        <ctime>

using   namespace       std;

int main()
{
        //* Check the number is prime number or not.
        //? Prime Number
        //*     1) greater than 1
        //*     2) cannot be formed by multiplication
        //*                     by other numbers

        //* When we divide by the numbers
        //*             from 0 to the number itself
        //* the remainer is always not 0.

        int     i, number, flag;

        cout << "Enter your number \n";
        cin >> number;

        i = 2;
        flag = 0;
        while ( i < number)
        {
                if ( ( number % i ) == 0) 
                      flag = 1;
                i++;
        }

        if (!flag)
                cout << "The number is Prime number "
                                << number << endl;

}