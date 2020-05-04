#include 	<iostream>
#include 	<string>
using namespace std;

int main()
{
	string 	str1("Programming");
	string::iterator it;
	for(int i=0; i<str1.length(); i++)
		cout << str1.at(i) << "\t";
	cout << endl;
	cout << str1.size() <<endl;

	for(char c : str1)
		cout << c << " \t";
	cout << endl;

	for(it=str1.begin(); it != str1.end(); it++)
		cout << *it << "\t";
	cout << endl;

	cout << "length : " << str1.length() << endl; 
	while(str1.length()>0){
		cout << str1.back() << "\t";
		str1.erase(str1.end()-1);
		cout << "length : " << str1.length() << endl; 
	}
	cout << endl;
}