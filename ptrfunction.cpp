#include <iostream>
using namespace std;

void getnumber(int *);
int main()
{
	int number;

	getnumber(&number);
	cout << number << endl;
}

void getnumber(int *input)
{
	cout << "Enter your input: ";
	cin >> *input;
}