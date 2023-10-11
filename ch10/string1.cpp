#include		<iostream>
using	namespace std;


int	main()
{
	string	strobj1;
	string	strobj2("C++ Programming");
	char	cstr[] = "Computing Fundamentals";
	string	strobj3(cstr, 9);

	strobj1 = "2019 Fall Semester";

	cout << "string object 1 " << strobj1 << endl;
	cout << "string object 2 " << strobj2 << endl;
	cout << "string object 3 " << strobj3 << endl;


	strobj1 += strobj2 ;
	cout << strobj1 << endl;
	if ( strobj1 > strobj3)
		cout << strobj1 << endl;
	else
		cout << strobj3 << endl;


	for(int i=0;i<strobj1.length(); i++)
		cout << strobj1[i] << endl;

}