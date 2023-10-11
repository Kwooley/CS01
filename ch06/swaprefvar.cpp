//	The fuction to swap values of two variables


#include	<iostream>
#include	<iomanip>
using 	namespace std;

void	swap1(int, int);
void	swap2(int &, int &);
int	main()
{
	int	valueA = 10, valueB = 20;

	cout << "Before call " << "A " << valueA << " valueB " << valueB  << endl;
	swap1(valueA, valueB);
	cout << "After call swap1() " << "valueA " << valueA << " valueB " << valueB  << endl;
	swap2(valueA, valueB);
	cout << "After call swap2() " << "valueA " << valueA << " valueB " << valueB  << endl;
}

void	swap1(int x, int y)
{
	int	tmp;
	tmp = x;
	x = y;
	y = tmp;
	cout << "\t\t [in Swap1] x and y  swapped " << setw(5) << x << setw(5) << y << endl;
}
void	swap2(int &x, int &y)
{
	int	tmp;
	tmp = x;
	x = y;
	y = tmp;
	cout << "\t\t [in Swap2] x and y  swapped " << setw(5) << x << setw(5) << y << endl;
}
