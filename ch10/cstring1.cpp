//
//

#include		<iostream>
#include		<cstring>
using	namespace std;

int		main()
{
	char	name1[] = "Mary";
	char	name2[10];
	string 	name3;

	cout << "Your name1 : " << name1 << "\nsizeof(name1) " << sizeof(name1)<<  endl;
	cout << "strlen(name1) " << strlen(name1) << endl;

	cout << "Enter your name2 again\n";
	cin.getline(name2, 10);
	cout << "Your name2 : " << name2 << endl;
	cout << "sizeof(name2) " << sizeof(name2)<<  endl;
	cout << "strlen(name2) " << strlen(name2) << endl;
	cout << "cin.gcount() " << cin.gcount() << endl;

	cout << "Enter your name3 again\n";
	getline(cin, name3);
	cout << "Your name3 : " << name3 << endl;
	cout << "sizeof(name3) " << sizeof(name3)<<  endl;
	cout << "name3.length() " << name3.length() << endl;
	
}