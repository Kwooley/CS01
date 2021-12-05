#include	<iostream>
#include	<string>
#include	<vector>

using namespace std;

int	main()
{
	vector<vector<int>> arr2d(10);
	// using  typedef
	typedef vector<int> row;
	vector<row>	TwoD(3);



	for(int i=0; i<3; i++)
		TwoD.push_back(row());
	for(int i=0; i<3; i++)
		TwoD[0].push_back(i);

	
	for(int i=0; i<3; i++)
		cout << TwoD[0][i] << endl;

	cout << TwoD.size() << endl;
}
