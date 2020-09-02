//* Lab5-3

// Write a small example program that validate user input 
// such that ( ch in ['A',...,'Z'] ) with the "do-while" statement. 
// If the input character has a validation, print out the character. 
// Otherwise, we need to get the input until it will be validated.

#include        <iostream>
using namespace std;
int     main()
{
        char    userinput;

        do {
                cout << "Enter your input\n";
                cin >> userinput;
        } while ( (userinput < 'A') || (userinput > 'Z'));
        cout << "Your input " << userinput << " is valid \n";
}