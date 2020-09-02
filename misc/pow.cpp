#include	<iostream>
#include	<iomanip>
#include	<cmath>

using namespace std;

int	main()
{

	int i;
	int begin, end;
	begin = 1; end = 1025;

	for(i=0 ; pow(2,i) < end; i++)
		cout << pow(2,i) << endl;;

}
