#include	<iostream>
#include	<cstdlib>
using namespace std;

int	main()
{
	int 	s;
	int	seed;
	seed = 10;
	srand(seed);
	s = rand();
	cout << s << "first rand num" << endl;
	s = rand();
	cout << s << "second rand num" << endl;
	s = rand();
	cout << s << "Third rand num" << endl;

}
