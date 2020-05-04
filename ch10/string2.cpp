#include		<iostream>
#include		<string>

using	namespace std;

int	main()
{
	string	strobj1;
	string	strobj2("C++ Programming");
	char	cstr1[] = "Computing Fundamentals";
	char	cstr2[] = "Program";
	string::iterator 	iter;

	// declaration with the cstring.
	string	strobj3(cstr1, 9);

	strobj1 = "2020 Spring Semester";

	cout << "string object 1 " << strobj1 << endl;
	cout << "string object 2 " << strobj2 << endl;
	cout << "string object 3 " << strobj3 << endl;
// ------------------------------------------------------------------
	//* append and assign example 
	//* strobj1 = "2020 Spring Semester". strobj2 = "C++ Programming"
	//* append the string2 to string1.
	//* append(string, x, n), assign(string, x, n)
	cout << "------------------- Exmaple of append and assign ---------------------------\n";
	strobj1.append(strobj2);
	cout << "strobj2 is appended to strobj1: " << strobj1 << endl;
	// append the string 2 (from 4 with 11 chars)
	strobj1.append(strobj2,4, 11);
	cout << "strobj2(4,11) is appended to strobj1: " << strobj1 << endl;

	strobj1.assign(strobj2);
	cout << "strobj2 is assigned to strobj1: " << strobj1 << endl;
	strobj1.assign(strobj2, 4, 11);
	cout << "strobj2(4,11) is assigned to strobj1: " << strobj1 << endl;
// ------------------------------------------------------------------
	cout << "------------------- Exmaple of begin(), end() ---------------------------\n";
	// Iterator : begin(), end() 
	// begin(), end() returns the string::iterator
	for(iter=strobj1.begin(); iter != strobj1.end(); iter++)
		cout << *iter;
	cout << " cout with string iterator " << endl;
	for(iter=strobj1.end(); iter >= strobj1.begin(); iter--)
		cout << *iter;
	cout << " cout with string iterator from end to begin " << endl;

// ------------------------------------------------------------------

// ------------------------------------------------------------------
	// compare
	cout << "------------------- Exmaple of compare() ---------------------------\n";
	strobj2.assign(strobj1);
	cout << "strobj1: " << strobj1 << " strobj2: " << strobj2 << endl;
	cout << strobj1.compare(strobj2) << endl;
	if (strobj1.compare(strobj2)==0)
		cout << "strobj1 and strobj2 are same\n";
	cout << "strobj1: " << strobj1 << " strobj3: " << strobj3 << endl;
	cout << strobj1.compare(strobj3) << " return value of compare strobj1 and strobj3 "<< endl;
	// + return value : The first character is greater than the compared string.
	int result = strobj1.compare(0, 7, "Program");
	cout << "The result of comparing from 0 to 7 in strobj1 with Program " << result << endl;
// ------------------------------------------------------------------
// ------------------------------------------------------------------
	// replace 1
	cout << "------------------- Exmaple of replace()) ---------------------------\n";
	cout << "Replace 1\n";
	cout << "strobj2: before replace " << strobj2 << endl;
	strobj2.replace(0, 4, "testprogramming");
	cout << "strobj2: after replace " << strobj2 << endl;
	cout << strobj1.compare(strobj2) << endl;
	if (strobj1.compare(strobj2)==0)
		cout << "strobj1 and strobj2 are same\n";

	// replace 2
	cout << "Replace 2 \n string object 1 from begin() to end()-5 will be replaced with string object 3\n";
	cout << "strobj1: " << strobj1 << " strobj3: " << strobj3 << endl;
	strobj1.replace(strobj1.begin(), strobj1.end()-5, strobj3);
	cout << "strobj1: " << strobj1 << " strobj3: " << strobj3 << endl;
	cout << strobj1.compare(strobj3) << " return value of compare strobj1 and strobj3 "<< endl;
	// + return value : The first character is greater than the compared string.
// ------------------------------------------------------------------

// ------------------------------------------------------------------
	// find and substr
	cout << "------------------- Exmaple of find() and substr() ---------------------------\n";
	strobj1.assign("Computer Programming C++ Programming");
	cout << "strobj1: " << strobj1 << endl;
	cout << "cstr2: " << cstr2 << endl;

	int pos = strobj1.find(cstr2, 0);
	cout << "Found position " << pos << endl;
	pos = strobj1.find(cstr2, 10);
	cout << "Found position " << pos << endl;
	// extract the substr from 10 to 21
	cout << strobj1.substr(pos, 11) << endl;
}