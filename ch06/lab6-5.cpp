#include	<iostream>
using namespace	std;

int	evensumGet(int);
int	oddsumGet(int);

int	main()
{
	int 	evenSum=0,oddSum=0; 
	int	input;

	do
	{
		cout << " Enter your input \n";
		cin >> input;
		if ( input == -1)
			break;
		else if ( input % 2)
			oddSum = oddsumGet(input);
	      	else 
			evenSum = evensumGet(input);
	} while (1);
	cout << oddSum << ": The summation of all Odd inputs\n";
	cout << evenSum << ": The summation of all Even inputs\n";
}
int	evensumGet(int even)
{
	static int	eSum=0;
	eSum += even;
	return eSum;
}
int	oddsumGet(int odd)
{
	static int	oSum=0;
	oSum += odd;
	return oSum;
}
