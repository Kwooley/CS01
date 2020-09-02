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
	
	a = rand() % 20;
	b = rand() % 20;
	c = rand() % 20;
	cout << a << "  " << b << "   " << c << endl;
	min2 = getmin(a,b,c);
	cout << "getmin 1   " << min2 << endl;
	min2 = getmin2(a,b,c);
	cout << "getdmin 2   " << min2 << endl;
	if ( a < b )
		if ( b < c)
			min = a;
		else // c < b
			if ( a < c)
				min = a;
			else
				min = c;
	else // b <= a
		if ( a < c)
			min = b;
		else // c < a
			if ( b < c)
				min = b;
			else 
				min = c;

	cout << " min " << min << endl;
}

int	getmin(int a,int b,int c)
{
	int min=-1;
	cout << a << b << c;
	if ((a < b ) && (a < c) )
		min = a;
	else if ( b < a &&  b< c)
		min = b;
	else if (c < a & c< b)
		min = c;
	return min;
}

int	getmin2(int a, int b, int c)
{
	int min=-1;
	if ( a < b ) 
		if ( a< c)
			min  = a;	
		else // c <= a and a < b
			min = c;
	else if (b < c) // b <= a 
		min  = b;
	else  // b <= a && c <= b
		min = c;	
	return min;

}
