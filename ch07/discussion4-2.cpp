// find min and max in array

#include		<iostream>
#include		<iomanip>
using namespace	std;


int		main()
{
	const int	SIZE = 10;
	int			min, minidx, i;
	int			numbers[SIZE] = {10, 15, 25, 35, 55, 45, 50, 5, 20, 40};

	min 	= numbers[0];
	minidx 	= 0;

	for(i=1; i<SIZE; i++) {
		if (min > numbers[i]) {
			min 	= numbers[i];
			minidx 	= i;
		}
	}	
	cout << "Min values " << setw(5) << min << " index No. " << setw(5) << minidx << endl;

	min = numbers[0];
	minidx = 0;
	i = 0;
	for(int val:numbers) {
		if (min > val) {
			min 	= val;
			minidx 	= i;
		}
		i++;
	}	
	cout << "Min values " << setw(5) << min << " index No. " << setw(5) << minidx << endl;


}