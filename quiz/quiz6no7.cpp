// quiz 6. No. 5
//

#include	<iostream>
#include	<vector>

using namespace std;

int main()
{
	vector<int> numbers= {10, 20, 15, 5, 25, 30};
	vector<int>::iterator it;

	for(it=numbers.begin(); it<numbers.end(); it++)
		if( *it == 20)
			numbers.erase(it);

	for(it=numbers.begin(); it<numbers.end(); it++)
		cout << *it << "\t" ;
	cout << endl;

}
