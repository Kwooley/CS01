// Vector initailization
#include		<iostream>
#include		<iomanip>
#include		<vector>
using namespace	std;

int 	main()
{
	vector<int>		number;  // initialization without the number of elements

	vector<int>		number2(10); // initialization with the number of elements
	vector<int>		number3(10, -1); // initialization with the number of elements and the initial value -1
	vector<int>  	number4(number3);  // initailization with vector number3
	vector<int>		number5 {11, 22, 33, 44, 55}; // without the number but the initial values
	vector<char>	name {'a', 'b', 'c', 'd', 'e'};


	// example 1 : Insert elements by using the member function "puch_back"
	number.push_back(10);
	number.push_back(20);
	number.push_back(50);
	number.push_back(40);

	// print all elements in vector number
	for(int val:number)
		cout<< setw(5) << val;
	cout << endl;

	for(int val:number2)
		cout << setw(5) << val;
	cout << endl;

	// print all elements by using the for-loop
	for(int i=0; i<number3.size();i++)
		cout<< setw(5) << number3[i];
	cout << endl;

	// print all elements by using the for-loop
	for(int i=0; i<number4.size();i++)
		cout<< setw(5) << number4[i] ;
	cout << endl;

	// print all elements by using the for-loop
	for(int i=0; i<number5.size();i++)
		cout<< setw(5) << number5[i] ;
	cout << endl;

	for(char val:name)
		cout << setw(5) << val ;
	cout << endl;

}