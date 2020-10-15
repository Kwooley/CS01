#include		<iostream>
#include		<iomanip>
#include		<vector>
#include 		<algorithm>
using namespace	std;

int	main()
{
	vector<int> 	number (3);

	for(int i=0; i < number.size(); i++) {
		cout << "Enter your number. \n";
		cin	>> number[i];
	}
	for(int val : number) {
		cout << val << endl;
	}

	for(int &val : number) {
		cout << "Enter your number.\n";
		cin >> val;
	}
	for(int val : number) {
		cout << val << endl;
	}

	number.pop_back();
	cout << "The size of vector number :" << number.size() << endl;

	number.push_back(99);
	cout << "After the insertion 99\n";
	for(int val : number) {
		cout << val << endl;
	}
	sort(number.begin(), number.end());
	cout << "After the sort()\n";
	for(int val : number) {
		cout << val << endl;
	}

	number.clear();
	cout << "The size of vector number5 :" << number.size() << endl;

	if ( number.empty())
		cout << "The vector number is empty\n";	
}

	
