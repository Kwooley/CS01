#include	<iostream>
using namespace	std;

int	main()
{
	int	i;
	int	begin, end;

	do
	{
		cout << "Enter the two integers\n";
		cin >> begin >> end;
	} while ( (begin > end) ||  ( begin < 0 || end > 100) );

	i = begin;
	do
	{
		if (i % 2 == 0) 
			cout << i << "  " ;
		i++;
	} while ( i <= end);
	cout << endl;
}
