#include <iostream>
using namespace std;

void getInput(double &);
int main()
{
	double number = 0.0;

	getInput(number);
	return 0;
}

void getInput(double &num)
{
	cout << "Enter a floating point number";
	cin >> num;

	if (cin.fail())
	{
		cout << "Enter numbers only: \n";
	}
	else
	{
		cout << "You entered: " << num << endl;
	}
}