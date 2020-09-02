//	
//


#include	<iostream>
using namespace	std;


int	main()
{
	const	int	N=5, M=5;
	int		i, j;

	for(i=0;i<N;i++) {
		for(j=0; j<M-i; j++)
			cout << " (" << i << "," << j << ") " ;
		cout << endl;
	}
	return 0;
}
