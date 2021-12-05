#include		<iostream>
#include		<iomanip>
using	namespace	std;

int			main()
{
		const 	int	SIZE = 10;
		int			numbers[SIZE] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
		int		i;

		for(i=0;i<SIZE; i++)
			cout << setw(5) << numbers[i];
		cout << endl;

		for(int i : numbers)
			cout << setw(5) << i;
		cout << endl; 


		int		sum=0;
		for(i=0;i<SIZE; i++)
			sum += numbers[i];
		cout << setw(5) << sum << endl;

		sum = 0;
		for(int i : numbers)
			sum += i;
		cout << setw(5) << sum << endl; 		

}