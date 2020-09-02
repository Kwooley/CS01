//* Ex1] Make the program that shows the number of digits for the given user input.
//*- User input must be a integer value between 0 and 30,000.

#include        <iostream>
using   namespace std;

int     main()
{
        short   usernum;
        int     digits;

        cout << "Enter the user number (0 ~ 30,000)\n";
        cin >> usernum;
        if ((usernum < 0)||(usernum>30000)) {
                cout << "The user number must be a interger between 0 and 30000\n";
                exit(0);
        }
        if ( usernum / 10000 > 0)
                digits = 5;
        else if ( usernum / 1000 > 0)
                digits = 4;
        else if ( usernum / 100 > 0)
                digits = 3;
        else if (usernum / 10 > 0)
                digits = 2;
        else    
                digits = 1;
        cout << "The number has " << digits << " digits\n";
}