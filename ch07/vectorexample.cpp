

#include	<iostream>
#include	<iomanip>
#include	<vector>
#include	<fstream>
#include	<string>


class foo{
	public:
		int number;
};
using namespace std;

int	main()
{
	vector<int> 	v1 {12, 15, 19, 21,25, 27,29, 33, 37, 43};
	int usernum;
	vector<int>::iterator it;

	cout << "Sorted Vector:";
	sort(v1.begin(), v1.end());
	cout << "\n";

	vector<foo> v2;
	v2[0].number =10;
	cout << v2[0].number << endl;

	usernum = 22;

	// [STEP 1] 
	// Find the position to insert.
	// Where is the propoer position to insert 22 where keeping the sorted order?
	for(it = v1.begin(); it<v1.end(); it++) {
		if ( usernum < *it)
			break;
	}
	// At this time,  if the loop exited in the middle of for-loop, it has the position to insert.
	// if the loop exited with full iterations, the position to insert it the last.

	v1.insert(it, usernum);

	// And now, we are goint to print the vector to check the result of insertion.
	for(it=v1.begin(); it<v1.end(); it++)
		cout << setw(5) << *it;
	cout <<endl;


}
