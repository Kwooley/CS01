#include	<iostream>
#include	<iomanip>
using namespace	std;

void	getinput(int &, int &, int &);
void	maxmin(int, int, int, int &, int &);

int	main()
{
	int 	num1, num2, num3;	
	int	max, min;
	getinput(num1, num2, num3);
	cout << " Your input " << setw(5) << num1 << setw(5) << num2 <<setw(5) <<  num3 << endl;
	maxmin(num1, num2, num3, max, min);
	cout << " Max, Min and Max-Min" << setw(5) << max << setw(5) << min <<setw(5) <<  max-min << endl;

}
void	getinput(int &num1, int &num2, int &num3)
{
	cout << "Enter your input ( 3 integers )\n";
	cin >> num1 >> num2 >> num3;
}
void	maxmin(int n1, int n2, int n3, int &max, int &min) 
{
	min = max = n1;
	if (min > n2)
		min = n2;
	if ( min > n3)
		min = n3;
	if ( max < n2)
		max = n2;
	if ( max < n3)
		max = n3;
}
