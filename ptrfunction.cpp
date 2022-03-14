#include <iostream>
using namespace std;

void getNumber(int *);
int main()
{
	int number;

	getNumber(&number);
	cout << number << endl;
}

void getNumber(int *input)
{
	cout << "Enter your input: ";
	cin >> *input;
}