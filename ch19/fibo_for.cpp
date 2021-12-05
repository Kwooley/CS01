#include <iostream>
using namespace std;

int fibo(int);
int main()
{
	int n;
	cout << "Enter Fibonacci Sequence Number: ";
	cin >> n;

	int ret = fibo(n);
	cout << "The result is " << ret << endl;
}
int fibo(int n)
{
	int n_1, fb, tmp;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
	{
		n_1 = 0;
		fb = 1;
		for (int i = 2; i <= n; i++)
		{
			tmp = fb;
			fb = fb + n_1;
			n_1 = tmp;
		}
		return fb;
	}
}