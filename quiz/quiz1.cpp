#include	<iostream>
using namespace std;

void display(int, int);
int	main()
{
	int 	x1, x2, x3, x4;
	int	flag=1;

	cout << "Points L1 and L2\n";
	cin >> x1 >> x2 >> x3 >> x4;

	if ( x1 < x3 ) 
	{
		if ( x2 <= x3 ) 
			flag = 0;
	}
	else if ( x1 > x3) 
		if ( x4 <= x1 )
			flag = 0;
	if (flag )
		cout << "two lines are overlapped\n";
	else	
		cout << "two lines are not overlapped\n";
	display(x1,x2);
	display(x3,x4);

	return 0;
}

void display(int x1, int  x2)
{
	int i;
	for (i=0; i<x1; i++)
		cout << " ";
	cout << x1;
	for (i=0; i<x2-x1+1; i++)
		cout << "-";
	cout << x2 << endl;
	return;
}

