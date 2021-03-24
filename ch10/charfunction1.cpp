
// Character Handling Functions
// Character classification functions
/*
isalnum
    Check if character is alphanumeric (function )

isalpha
    Check if character is alphabetic (function )

isblank
    Check if character is blank (function )

iscntrl
    Check if character is a control character (function )

isdigit
    Check if character is decimal digit (function )

isgraph
    Check if character has graphical representation (function )

islower
    Check if character is lowercase letter (function )

isprint
    Check if character is printable (function )

ispunct
    Check if character is a punctuation character (function )

isspace
    Check if character is a white-space (function )

isupper
    Check if character is uppercase letter (function )

isxdigit
    Check if character is hexadecimal digit (function )


Character conversion functions
Two functions that convert between letter cases:

tolower
    Convert uppercase letter to lowercase (function )

toupper
    Convert lowercase letter to uppercase (function )
 */

#include		<iostream>
#include		<cctype>
using namespace	std;

int 	main()
{
		char 		c;
		do {
			cout << "Enter a character\n";
			cin.get(c);
			if (isdigit(c))
				cout << "digit \n";
			if (isalpha(c))
				cout << "alphabetic\n";
			if (isalnum(c))
				cout << "alpha numeric\n";
			if (isspace(c))
				cout << "white-space\n";
			if (isupper(c))
				cout << "uppercase\n";
			if (islower(c))
				cout << "lowercase\n";
			cin.ignore();
		} while( c != 'q');

}
