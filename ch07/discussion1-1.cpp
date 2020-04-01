// No bounds check

#include	<iostream>
using namespace 	std;


int	main()
{
	const int	SIZE=3;
	int			i;
	int			number[SIZE] = {10, 20,30};

	for(i=0; i<=SIZE*2; i++)
		cout << number[i] << endl;
	
	return 0;
}