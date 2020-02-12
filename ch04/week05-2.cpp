#include        <iostream>
#include        <cstdlib>
#include        <ctime>
#include        <iomanip>
using namespace std;

int main()
{
        //* Convert the lower-case character to the upper-case
        //* Convert the upper-case character to the lower-case

        char    c;
        cout << "Enter your character\n";
        cin >> c;   //?  B : 66

        //* Input validation
        //* if the char val is not in the range 'a' to 'z' or 'A' to 'Z'
        //*   exit(0)

        if  ( ((c >= 'a') && (c <= 'z'))  ||  (( c >= 'A') && (c <='Z')) )
        {
                 //* Convert to lower or upper
               if ((c >= 'a') && (c <= 'z'))
                        c -= 'a' - 'A';
               else if ((c >= 'A') && (c <= 'Z'))
                        c += 'a' - 'A';
                //* Print the result
                cout << " your converted chars is " << c << endl;
        }
       
}


