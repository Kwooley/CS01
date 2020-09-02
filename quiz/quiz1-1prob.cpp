#include	<iostream>
using namespace std;

int		checkoverlap(int, int, int, int, int, int);
int		checktwolines(int, int, int, int);
int		validinput(int, int, int, int, int, int);
void 	display(int, int);
int	main()
{
	int 	x1, x2, x3, x4, x5, x6;
	int	flag=1;

	cout << "Points L1, L2 and L3\n";
	cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;

	if (validinput(x1, x2, x3, x4, x5, x6)) {
		flag = checkoverlap(x1,x2,x3,x4,x5,x6);
		if (flag )
			cout << "The lines are overlapped\n";
		else	
			cout << "The lines are not overlapped\n";
		display(x1,x2);
		display(x3,x4);
		display(x5,x6);
	}

	return 0;
}

int validinput(int x1,int x2,int x3,int x4,int x5,int x6)
{
	int		flag;
	flag = (x2>x1)? 0:1;
	flag = (x3>x4)? 0:1;
	flag = (x5>x6)? 0:1;
	return 	flag;
}
void display(int x1, int  x2)
{
	int i;
	if (x1 > x2)
		return;
	for (i=0; i<x1; i++)
		cout << " ";
	cout << x1;
	for (i=0; i<x2-x1+1; i++)
		cout << "-";
	cout << x2 << endl;
	return;
}

