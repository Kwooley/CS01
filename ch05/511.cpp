#include	<iostream>
using namespace std;

int	main()
{
	int 	i,j;
	int	begin, end;

	cout << "Enter your two inputs\n";
	do
		cin >> begin >> end;
	while ( ( begin > end) || (begin <2) || (end <0) );

	for(i=begin; i<=end; i++){
		for(j=2; j<=(i/2); j++) 
			if ( i % j == 0)
				break;
		if ( j > (i/2) )
			cout << i << "prime number\n";
	}
}
