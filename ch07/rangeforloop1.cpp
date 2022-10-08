
#include		<iostream>
using namespace	std;

int	main()
{

	int		numbers[] = {10, 20, 30, 40, 50};

	for(int eachvalue : numbers)
		cout << eachvalue << endl;


	string	days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun  "};

	for (string day : days)
		cout << day << endl;
}
