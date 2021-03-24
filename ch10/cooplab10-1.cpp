// Cooperative Programming Lab 10-1
// Check the Strong Password.

#include		<iostream>
#include		<cstring>
#include		<cctype>
using namespace std;


bool	checklength(char []);
bool	checkdigit(char []);
bool	checklower(char []);
bool	checkupper(char []);
bool	checkspecial(char []);

int main()
{
	char	pwdstr[20] = "passwordtest";

	cout << "Enter your password\n";
	cin >> pwdstr;

	if (  	checklength(pwdstr) &&
			checkdigit(pwdstr) &&
			checklower(pwdstr) &&
			checkupper(pwdstr) &&
			checkspecial(pwdstr))
		cout << "Your password is strong\n";
}
bool	checklength(char pwdstr[]) {
	if ( strlen(pwdstr) >= 6)
		return true;
	cout << "At least 6 characters.\n";
	return false;
}
bool	checkdigit(char pwdstr[]) {
	for(int i=0; i<strlen(pwdstr); i++)
		if (isdigit(pwdstr[i]))
			return true;
	cout << "At least one digit character is required.\n";
	return false;
}
bool	checklower(char pwdstr[]) {
	for(int i=0; i<strlen(pwdstr); i++)
		if (islower(pwdstr[i]))
			return true;
	cout << "At least one lower character is required.\n";
	return false;
}
bool	checkupper(char pwdstr[]) {
	for(int i=0; i<strlen(pwdstr); i++)
		if (isupper(pwdstr[i]))
			return true;
	cout << "At least one upper character is required.\n";
	return false;
}
bool	checkspecial(char pwdstr[]) {
	for(int i=0; i<strlen(pwdstr); i++)
		if (ispunct(pwdstr[i]))
			return true;
	cout << "At least one punctuation character is required.\n";
	return false;
}
