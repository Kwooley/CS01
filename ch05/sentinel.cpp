#include	<iostream>
using	namespace	std;

int	main()
{
	int num, sum=0;

	cout << "Enter your number \n";
	cin >> num;

	while ( num != -1) {
		sum += num;

		cout << "Enter your number \n";
		cin >> num;
	}
	cout << sum <<endl;
}
