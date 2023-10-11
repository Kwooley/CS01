#include <iostream>
using namespace std;

void myfunction(void);
int main()
{
	myfunction();
	myfunction();
}
void myfunction()
{
	static int number = 10;

	number += 10;
	cout << number << endl;
}
