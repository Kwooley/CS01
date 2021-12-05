#include	<iostream>
using namespace	std;

int	main()
{
	int	i;
	int	begin, end;

	cout << "Enter the two integers\n";
	cin >> begin >> end;
	while ( (begin > end) ||  ( begin < 0 || end > 100) )
	{
		cout << "Enter the two integers\n";
		cin >> begin >> end;
	}

	i = begin;
	while ( i <= end)
	{
		if (i % 2 == 0) 
			cout << i << "  " ;
		i++;
	}
	cout << endl;
}
