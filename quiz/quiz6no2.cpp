// quiz 6. No. 2
//
// Find the pairs that has the maximum gap in the array.
#include	<iostream>
using namespace std;


int main()
{
	int		numbers[8] = {10, 25, 5, 20, 1, 30, 15, 0};
	int		result=0;

	for(int i=0; i<7; i++){
		if (i == 0)
			result = abs(numbers[i] - numbers[i+1]);
		else{
			if  ( result < abs(numbers[i] - numbers[i+1]) )
				result = abs(numbers[i] - numbers[i+1]);
		}
	}
	cout << "The result is " << result << endl;
}
