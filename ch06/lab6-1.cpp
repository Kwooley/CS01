#include	<iostream>
using namespace std;

int inputValidate(int, int);
void getListprime(int, int);

int	main()
{
	int	begin, end;
	int res;

	do{
		cout << "Enter your two inputs\n";
		cin >> begin >> end;
	} while (inputValidate(begin, end));

	getListprime(begin, end);
}

int	inputValidate(int begin, int end)
{
	if ( ( begin > end) || (begin <2) || (end <0) )
		return 1;
	else
		return 0;
}

void	getListprime(int begin, int end)
{
	int i,j;
	for(i=begin; i<=end; i++){
		for(j=2; j<=(i/2); j++) 
			if ( i % j == 0)
				break;
		if ( j > (i/2) )
			cout << i << " prime number\n";
	}
}
