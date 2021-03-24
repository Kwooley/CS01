// quiz 6. No. 4-2
//
// 
#include	<iostream>
#include	<vector>
using namespace std;


int main()
{
	int	numbers[8]= {6,5,4,3,4,3,5,1};
	int seen[9]={0};
	for(int i=0; i<8; i++){
		if( seen[numbers[i]] == 0){ // first meet the number i
			cout << " meet \t" << numbers[i] << endl;
			seen[numbers[i]] = 1;
		}
	}
	for(auto x:seen)
		cout << x << "\t" ;
	cout << endl;

	for(int i=1; i<=8; i++)
		if (seen[i] == 0)
			cout << i << " absent value " << endl;
}
