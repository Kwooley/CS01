#include	<iostream>
using 	namespace	std;

int	main()
{
	int 	i,j;
	int	times;

	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
		{
			times = i * j;
			cout << i << "  *  " << j << "  =  " << times << endl;
		}
}
