#include		<iostream>
#include		<iomanip>
using	namespace	std;

int			main()
{
		const 	int	SIZE = 10;
		int			numbers[SIZE] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
		int		i;
		double	sum=0.0;
		double	average;


		for(i=0;i<SIZE; i++)
			sum += numbers[i];
		average = sum / SIZE;
		cout << setw(5) << sum << endl;
		cout << setw(5) << average << endl; 		

}