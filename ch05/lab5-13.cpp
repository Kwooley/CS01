// 	Make a program that prints the index (i, j) 
// 	with the given order in the blue triangle by using the nested for loop. 
// 	The index will be printed by the left to right and the top to bottom.
//		- Use "Debugging tool" to show your output is correct step by step.
//

#include 	<iostream>
using namespace	std;

int main()
{
	const 	int N = 3;
	int 	i,j,t;
	int	choice;

	cout << "Enter the problem number [1 or 2 or 3]\n";
	cin >> choice;
	switch(choice) {
		case 	1:
			for (i=0; i<N; i++) { 		// (i=0,j=[0]), (i=1, j=[0,1]), (i=2, j=[0,1,2])
				for(j=0;j<=i;j++)
					cout << "(" << i << "," << j << ")" ;
				cout << endl;
			}
			break;
		case	2:
			for (i=0; i<N; i++) {
				for(j=i;j<N;j++) 	// (i=0,j=[0,1,2]), (i=1, j=[1,2]), (i=2, j=[2])
					cout << "(" << i << "," << j << ")" ;
				cout << endl;
			}
			break;
		case	3:
			for (i=0; i<N; i++) {
				for(j=N-i-1; j<N; j++)     // (i=0,j=[2]), (i=1, j=[1,2]), (i=2, j=[0,1,2])
					cout << "(" << i << "," << j << ")" ;
				cout << endl;
			}
			break;
	}
}