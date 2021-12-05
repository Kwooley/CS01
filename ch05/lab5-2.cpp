//*     Lab 5-2 

#include        <iostream>
using namespace std;

int main()
{
        int     userinput;

        cout << "Enter your number \n";
        cin >> userinput;
        while( (userinput <= 0) || (userinput >= 100) )
        {
                cout << "The input must be greater than 0 or less than 100\n";
                cin >> userinput;
        }
        cout << "The input " << userinput << " is valid" << endl;
}