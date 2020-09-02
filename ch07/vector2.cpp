#include		<iostream>
#include		<vector>
using		namespace std;

int			main()
{
	int 	i=0;
	vector<int>		number;

	// for(int &val:number)    // 0 iteration because vector delaration without size.
	// 	cin >> val; 
	
	
	for(int i=0; i<10; i++)
		cin >> number[i] ;    // This causes a segmentation error.

	for(int val:number)
		cout << val;


}