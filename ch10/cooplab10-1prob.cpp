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
	char	pwdstr[20];

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
	return false;
}
bool	checkdigit(char pwdstr[]) {
	return false;
}
bool	checklower(char pwdstr[]) {
	return false;
}
bool	checkupper(char pwdstr[]) {
	return false;
}
bool	checkspecial(char pwdstr[]) {
	return false;
}
