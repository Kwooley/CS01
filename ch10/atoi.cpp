

#include		<iostream>
#include		<iomanip>
using namespace std;

int	 main()
{
	int 	num;

	char	cstr[10] = "123";
	string 	strcls;

	cout << " string 123  :" << cstr << endl;
	num = atoi(cstr);
	cout << " integer 123 :" << num << endl;
	strcls = to_string(num);
	cout << " String class 123 :" << strcls << endl;
}