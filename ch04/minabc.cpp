#include	<iostream>
#include	<ctime>
#include	<cstdlib>
using	namespace	std;
int	getmin(int, int, int);
int	getmin2(int, int, int);

int	main()
{
	int a,b,c;
	int min, min2;

	srand(time(NULL));
	
	for(int i=0; i<10; i++)
	{
		a = rand() % 20;
		b = rand() % 20;
		c = rand() % 20;
		cout << a << "  " << b << "   " << c << "   "; 
		if ( a < b) 
			min = a;
		else 
			min = b;
		if ( min > c)
			min = c;
		cout << " min " << min << endl;
	}

}
