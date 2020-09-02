//		Write a program that 
//			check the given two lines are overlapped each other or not in one-dimensional graph. 
//		The line is denoted by (x1, x2), x1 < x2. 
//		The function boolean overlap(int x1, int x2, int x3, int x4) 
//			is to check the two lines are overlapped each other.


#include	<iostream>
using namespace std;

bool inputvalidate(int, int);
bool overlap(int, int, int, int);

int     main()
{
        int     x1, x2, x3, x4;
        cout << "Enter your input\n";
        cin >> x1 >> x2 >> x3 >> x4;

	if ( !inputvalidate(x1, x2) ||  !inputvalidate(x3,x4) )
		 exit(0);
        if( overlap(x1,x2,x3,x4) )
		cout << "Two lines are overlapped\n";
        else
		cout << "Two lines are not overlapped\n";
}

bool	inputvalidate(int x1, int x2)
{
	if ( x1 < x2)
		return true;
	else
		return false;
}
bool	overlap(int x1, int x2, int x3, int x4)
{
	int 	flag=1;
	if ( x2 <= x3 )
		flag =0;
	else if ( x4 <= x1 )
		flag = 0;
	return flag;
}
