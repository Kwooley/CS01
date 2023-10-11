// Programming Assignment 5-1(Lab 5-7)
// Write a program that calculates the 2 to the n_th power( n is a negative or positive integer)
// do not use <cmath> pow() function.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, n, flag = 0;
	float pow = 1.0;

	cout << "Enter your input(the number of power)\n";
	cin >> n;

	if (n < 0)
	{
		flag = 1;
		n *= -1;
	}
	for (i = 0; i < n; i++)
		pow *= 2;

	if (flag)
		pow = 1.0 / pow;
	else if (n == 0)
		pow = 1.0;

	cout << setprecision(5);
	cout << "2 to Power " << n << " is " << pow << endl;
}
