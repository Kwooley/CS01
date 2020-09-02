#include	<iostream>
using namespace std;

int	main()
{
	int		num[10] = { 15, 23, 45, 24, 15, 16, 29, 93, 23, 10};
	char	c[12]= {'c', 'p', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g'};

	for (int i=0; i<10; i++)
		cout << num[i] << "\t" ;
	cout << endl;

	cout << "Size of num " << sizeof(num) << endl;

	for (int i=0; i<12; i++)
		cout << c[i];
	cout << endl;
	cout << "Size of char array c" << sizeof(c) << endl;
}
