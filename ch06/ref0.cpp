#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int num2 = 100;
	int &ref = num;

	ref = 20;
	cout << num << "  " << ref << endl;

	ref = num2;
	cout << num << "  " << ref << endl;
}
