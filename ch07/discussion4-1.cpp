// find min and max in array


#include		<iostream>
#include		<iomanip>
using namespace	std;


int		main()
{
	const int	SIZE = 10;
	int			min, max, i;
	int			numbers[SIZE] = {10, 5, 25, 35, 55, 45, 50, 15, 20, 40};

	min = max = numbers[0];

	for(i=1; i<SIZE; i++) {
		if (min > numbers[i])
			min = numbers[i];
	
		if (max < numbers[i])
			max = numbers[i];
	}
	cout << "Min values " << setw(5) << min << endl;
	cout << "Max values " << setw(5) << max << endl;
}