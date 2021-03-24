// quiz 6. No. 4
//
// 
#include	<iostream>
#include	<vector>
using namespace std;


int main()
{
	int	numbers[8]= {6,5,4,3,4,3,5,1};
	int j;
	for(int i=1; i<9; i++){
		for(j=0; j<8; j++)
			if (i == numbers[j])
				break;
		if ( j == 8)
			cout << i << " absent value " << endl;
	}
}
