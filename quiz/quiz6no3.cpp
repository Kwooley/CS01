// quiz 6. No. 3
//
// 
#include	<iostream>
using namespace std;


int main()
{
	int		numbers[5] = {8,4,5,1,6};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			if (numbers[i] < numbers[j])
				cout << numbers[j] << " " ;
		cout << endl;
	}

}
