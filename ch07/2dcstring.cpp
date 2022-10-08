// 2 dimensional character type array

#include	<iostream>
#include	<cstring>

using namespace std;

int 	main()
{
	const	int	SIZE=100;
	const	int	WDCNT=5;

	char	userchar;
	char 	cstrarray[WDCNT][SIZE] = { "Python", 
										"C++", 
										"Java", 
										"R", 
										"Python 3"};

	for(int i=0;i<WDCNT;i++)
		cout << cstrarray[i] << endl;

	cout << "Enter your char \n";
	cin >> userchar ;  //* 'c' 

	for(int	i=0; i<WDCNT; i++) {
		for(int j=0; j<strlen(cstrarray[i]); j++)
			if ( userchar == cstrarray[i][j])
				cout << " Found the user character " << userchar <<endl;
			// cout << cstrarray[i][j] ;
	cout << endl;
	}
}