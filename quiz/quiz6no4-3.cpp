// quiz 6. No. 4
//
// 
#include	<iostream>
#include	<vector>
using namespace std;


int main()
{

	vector<int> numbersvector {6,5,4,3,4,3,5,1};
	for(int i=1; i<9; i++)
		if (!count(numbersvector.begin(), numbersvector.end(), i))
			cout << i << " absent value " << endl;
}
