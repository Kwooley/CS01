#include	<iostream>
using namespace std;

int	main()
{
	int num;
	cout << " Enter your input" << endl;

	cin >> num;
	cin.ignore();
	cout << "Your number is " << num << endl;
	cout << "Enter any key" << endl;

	cin.get();

	char c;
	cout << " cin test" << endl;
	cin >> c;

	return 0;
}
