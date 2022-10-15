#include <iostream>
using namespace std;

int isPrime(int);
int main()
{
	const int N = 3;
	int plist[N];
	int num, pcount;

	pcount = 0;
	while (pcount < 3)
	{
		cout << "Enter one integer: ";
		cin >> num;
		if (isPrime(num))
		{
			plist[pcount] = num;
			pcount += 1;
		}
	}
	for (int v : plist)
		cout << v << " ";
	cout << endl;
}

int isPrime(int num)
{
	if (num < 2)
		return 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}
