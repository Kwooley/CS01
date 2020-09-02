// Quiz 3. No2.
//
#include 	<iostream>
#include	<iomanip>
using	namespace std;

int	main()
{
	char	mainstring[] = "Chocolate";
	char	substring[] = "ate";
	int		lenmain, lensub, flag=0, i,j ;

	lenmain = sizeof(mainstring)-1;		// length of mainstring
	lensub = sizeof(substring)-1;			// length of substring
	cout << "0123456789" << endl;
	cout << mainstring << endl;
	cout << substring << endl;

	for(i=0; i<lenmain; i++)
		if ( mainstring[i] == substring[0] ) {
			for(j=1; j<lensub; j++) {
				cout << j;
				if ( mainstring[i+j] != substring[j])
					break;
			}
			if ( j == lensub) {
				flag = 1;
				break;
			}
		}
	if (flag)
		cout << "Found match at the position " << i << endl;
	else
		cout << "Not found \n";
}