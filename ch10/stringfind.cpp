#include 	<iostream>
#include 	<string>
using namespace std;

int main()
{
	string 	str1="abcdef,ghi,jklm,";
	string 	splitstr;
	int 	found, start;

	found = str1.find(',');
	splitstr = str1.substr(0,found);
	cout << splitstr << endl;  //* abc
	start = found+1;

	found = str1.find(',', found+1);
	splitstr = str1.substr(start, found-start);
	cout << splitstr << endl;

	start = 0;
	while( (found = str1.find(',', start)) != string::npos){
		splitstr = str1.substr(start, found-start) ;
		cout << splitstr << endl;
		start = found + 1;
	}


}