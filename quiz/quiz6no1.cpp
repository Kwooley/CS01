// quiz 6. No. 1
//
// Find the numbers that the occurrences is over than one.
#include	<iostream>
using namespace std;


int main()
{
	int		numbers[10] = {6,3,2,3,4,5,6,2,3,8};
	int		seen[10] = {0};
	int		dup=0;


	for(int i=0; i<10; i++){
		for(int j=0;j<10;j++){
			
		}
	}


	for(int i=0; i<10; i++)
	{
		if ( seen[numbers[i]] == 0)
			seen[numbers[i]] = 1;
		else if (seen[numbers[i]] == 1){
			seen[numbers[i]] += 1;
			dup++;
		}
	}
	cout << "Dup. elements are " << dup << endl;
}
