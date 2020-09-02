// Array initialization

#include			<iostream>
using namespace 	std;

int	main()
{
	const int	SIZE = 5;

	int			numbers[SIZE] = {10, 20, 30, 40 , 50};
	short		snumbers[SIZE] = {11, 21, 31};
	
	for (int i=0; i<SIZE; i++) {
		cout << numbers[i] << endl;
	}
	for (int i=0; i<SIZE; i++) {
		cout << snumbers[i] << endl;
	}

}