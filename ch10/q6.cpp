#include 	<iostream>
#include 	<string>
using namespace std;

int main()
{
	string str1, str2;
	int 	idx;
	str1 = "Programming";
	str2 = "C++";

	// * insert()
	str1.insert(0, str2);
	str1.insert(str2.length(), " ");
	cout << str1 << endl;

	// * find()
	idx = str1.find('+', 0);
	cout << idx << endl;
	idx = str1.find('+', idx+1);
	cout << idx << endl;
	
	// * append()
	string str3 = " Section 04";
	cout << str1 << endl;
	str1.append(str3, 0 ,8);
	cout << str1 << endl;
	str1.append(str3, 7); 
	cout << str1 << endl;

	// * assign()
	str2.assign("Python");
	cout << str2 <<endl;
	str2.assign("Python Programming", 6); //* assign the first 6 letters to str2.
	cout << str2 <<endl;

	// * replace()
	// * str1 = "C++ programming Section 04"
	str1.replace(0,3,str2);
	cout << str1 << endl;

	// * substr( )
	string str4;
	str4 = str1.substr(0, 18);
	cout << str4 << endl; 
	str4 = str1.substr(18, str1.length()-18+1);
	cout << str4 << endl; 
}