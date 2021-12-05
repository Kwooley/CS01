#include <iostream>
using namespace std;

int binarySearch(int[], int, int, int);

int main()
{
	const int N = 10;
	int array[N] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
	int target, foundindex;

	cout << "Enter the number to find in this array : ";
	cin >> target;

	foundindex = binarySearch(array, 0, N - 1, target);
	if (foundindex == -1)
		cout << "The target value was not found \n";
	else
		cout << "The target value " << target << " was found at the index " << foundindex << endl;
}

int binarySearch(int array[], int first, int last, int target)
{
	int mid, ret;

	if (first > last)
		return -1;
	mid = (first + last) / 2;
	if (array[mid] == target)
		return mid;
	if (array[mid] > target)
		ret = binarySearch(array, first, mid - 1, target);
	else
		ret = binarySearch(array, mid + 1, last, target);
	return ret;
}