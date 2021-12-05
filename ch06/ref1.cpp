#include	<iostream>
using namespace	std;

void	getinput(int *);
int	main()
{
	int num;
	getinput(&num);

	cout << "num :" << num << endl;
}	

void	getinput(int *p)
{
	cout << "Enter your input \n";
	cin >> *p;
	
}
