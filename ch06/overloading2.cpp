#include	<iostream>
#include	<iomanip>
using namespace std;

void	swap(int &, int &);
void	swap(int &, int &, int &);
void	myprint(int, int, int);
void	myprint(int, int, int, int); 

int   main()
{
	int	val1, val2, val3;	

	cout << "Enter 2 integers\n";
	cin >> val1 >> val2;
	myprint(0, val1, val2);
	swap(val1, val2);
	myprint(1, val1, val2);

	cout << "Enter 3 integers\n";
	cin >> val1 >>  val2 >>  val3;
	myprint(0, val1, val2, val3);
	swap(val1, val2, val3);
	myprint(1, val1, val2, val3);
}

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
void swap(int &a, int &b, int &c)
{
	int tmp;
	swap(a, b);
	swap(c, a);
}
void myprint(int flag, int val1, int val2)
{
	if (flag == 0)
		cout << "val1 :" << val1 << "  val 2 : " << val2 << "  are about to be changed\n";
	else 
		cout << "val1 :" << val1 << "  val 2 : " << val2 << "  were changed\n";
}
void myprint(int flag, int val1, int val2, int val3)
{
	if (flag==0)
		cout << "val1 :" << val1 << "  val 2 : " << val2 << "  val 3 : " << val3 << "  are about to be changed\n";
	else
		cout << "val1 :" << val1 << "  val 2 : " << val2 << "  val 3 : " << val3 << "  were changed\n";
}
