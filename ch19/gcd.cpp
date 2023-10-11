#include <iostream>
using namespace std;

int GCD(int, int);
int main()
{
	int x, y;
	cout << "Enter two integers \n";
	cin >> x >> y;

	int gcd = GCD(x, y);
	cout << "The GCD is " << gcd << endl;
}
int GCD(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return GCD(y, x % y);
}