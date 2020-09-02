#include	<iostream>
using namespace std;

int	main()
{
	int i,j;
	int flag;

	for (i=2; i<100; i++) {
		flag = 1;
		for (j=2; j<(i/2); j++)
			if ( i%j == 0) flag = 0;
		if (flag) cout << i << "Prime\n";
	}

	for(i = 2; i<100; i++) {
      		for(j = 2; j <= (i/j); j++)
         		if(!(i%j)) break; // if factor found, not prime
         	if(j > (i/j)) cout << i << " is prime\n";
   	}
}
