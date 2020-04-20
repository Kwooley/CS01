// Condition for the email string.
// start with the alphabet.
// ID characters are all alpha numerics characters
// the last string shoud be one of the list {com, edu, org, and net}

#include		<iostream>
#include		<cctype>
#include		<cstring>
using namespace std;

bool 	idcheck(char []);
bool 	domaincheck(char []);

int 	main()
{
		char 	email[20];

		cout 	<< "Enter your email \n";
		cin 	>> email;

		if( idcheck(email))
			cout << "ID check passed\n";
		if( domaincheck(email))
			cout << "Domain check passed\n";
}
bool 	idcheck(char email[])
{
	return true;
}
bool	domaincheck(char email[])
{
	return true;
}