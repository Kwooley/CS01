#include 	<iostream>
#include 	<string>
using namespace std;


int main()
{
	string 	str1="Program";

	str1.insert(0,"C++ ");
	cout << str1 << endl;  //* C++ Program 

	str1.insert(str1.length(), "ming");
	cout << str1 << endl; //* C++ Programming 

	str1.erase(0, 4); //* Erase 4 characters from the position 0: Programming
	cout << str1 << endl; //* Programming

	str1.erase(str1.length()-3, 3);
	cout << str1 << endl; 

	str1.append("ing");
	cout << str1 << endl; //* Programming 

}