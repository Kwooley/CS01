#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int 	*ptr;

	ptr = (int *)malloc(sizeof(int));

	*ptr = 20;

	cout << *ptr << endl;

}