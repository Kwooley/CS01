#include <iostream>
using namespace std;

int main()
{
	int	*ptr;
	ptr = new int;

	*ptr = 20;
	cout << " Current value pointed by ptr : " << *ptr << endl;

	ptr = new int;
	*ptr = 30;
	cout << " Current value pointed by ptr : " << *ptr << endl;

}