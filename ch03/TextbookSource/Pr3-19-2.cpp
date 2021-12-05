// This program demonstrates using the getline function
// to read character data into a string object.
#include <iostream>
#include <string>
using namespace std;

int main()
{
//	string name;
//	string city;
	char   	name[20];
	char 	city[20];

	cout << "Please enter your name: ";
	cin.getline(name, 10, '\n');
	cout << "Enter the city you live in: ";
	cin.getline(city, 10, '\n');

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}