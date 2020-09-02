// Find the sub string in the original string

#include	<iostream>
using	namespace	std;

int		finduserstring(char [], int, char[], int);
int		main()
{
	int		baselen, userlen, position;
	char 	cstr[] = "Chocolate";
	char	userstr[100];

	baselen = sizeof(cstr);
	cout << cstr << endl;
	cout << "Enter the string to find\n";
	cin.getline(userstr,100);
	userlen = cin.gcount();
	
	position = finduserstring(cstr, baselen, userstr, userlen);
	if ( position != -1)
		cout << "Found your string at :" << position << endl;
	else
		cout << "Not found\n";

}
int		finduserstring(char cstr[],int baselen, char  userstr[], int userlen)
{
	
	return pos;
}