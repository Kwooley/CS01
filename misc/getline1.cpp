#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[10];
	char city[10];
	//string name;
	//string city;

	cout << "Please enter your name: ";
	cin.getline(name, 5);
	cout << "Enter the city you live in: ";
	cin.getline(city, 5);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0;
}

