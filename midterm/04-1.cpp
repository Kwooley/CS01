// 04

#include	<iostream>
using namespace	std;

void	swapall(void);
int		findNth(int);

int 	g1,g2,g3,g4,g5;

int	main()
{
	int  Nth;
	g1 = 99; g2=11; g3= 33; g4=88; g5=22;
	
	Nth = findNth(2);
	cout << "The 2nd Largest Number is " << Nth << endl; 
}

int	getinput(void)
{
	int num;
	do {
		cout << " Enter [1..5]";
		cin >> num;	
	} while ( num < 1 || num > 5);
	return num;
}

int 	findNth(int num)
{
	int i;

	for (i=0; i<num; i++)
		swapall();
	
	switch(num) {
		case 	1:
			return g5;
			break;
		case	2:
			return g4;
			break;
		case	3:
			return g3;
			break;
		case 	4:
			return g2;
			break;
		default :
			return g1;
	}
}
void	swapall(void)
{
	if (g1 > g2)
		swap(g1, g2); 
	if (g2 > g3)
		swap(g2, g3); 
	if (g3 > g4)
		swap(g3, g4);
	if (g4 > g5)
		swap(g4, g5);
}
