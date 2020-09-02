// quiz 6. No. 9
// reverse values in array

#include	<iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	int 	numbers[SIZE]=	{1,2,3,4,5,6,7};


	for(int i=0;i<SIZE/2;i++)
		swap(numbers[i], numbers[SIZE-i-1]);

	for(int val:numbers)
		cout << val << "\t";
	cout << endl;
}
