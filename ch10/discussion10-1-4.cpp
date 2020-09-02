// strcmp, strncmp, strcat, strstr
// Read all lines from the file "name.txt"
// 1) find the substring in the name.
// 2) if found, calculate the position index in the name.


#include	<iostream>
#include	<fstream>
#include	<cstring>
#include	<cctype>
using namespace std;

int main()
{
	ifstream	ifso;
	char		readname[20];
	char		userinput[100];
	char		*pos;

	cout << "Enter the string you want to find in name\n";
	cin >> userinput;

	ifso.open("name.txt", fstream::in);

	if(ifso) {
		while(ifso >> readname) {
			cout << "Read name : " << readname << endl;
			pos = strstr(readname, userinput);
			if (pos){
				cout << "Found Position : " ;
 				cout << strlen(readname) - strlen(pos) << endl;
			}
		}
	}
}
