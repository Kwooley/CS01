// Final No 4.
// Check the values are in increasing order.

#include	<iostream>
using namespace std;

bool checkorder(int [], int);
int main()
{
	const int SIZE = 10;
	// int numbers[SIZE] = {2,5,3,1,4,8,9,7,6,10};
	int numbers[SIZE] = {1,2,3,4,5,6,7,8,9,10};

	if (checkorder(numbers, SIZE))
		cout << "Perfect Increasing Order\n";
}
bool checkorder(int numbers[], int SIZE)
{
	int 	i;

	for(i=0;i<SIZE-1; i++)
		if (numbers[i] > numbers[i+1])
			break;
	if (i==SIZE-1)
		return true;
	return false;
}