// strcmp, strncmp, strcat, strstr


#include	<iostream>
#include	<fstream>
#include	<cstring>
#include	<cctype>
using namespace std;

int main()
{
	ifstream	ifso;
	char			readname[20];
	char			userinput[20];

	cout 	<< "Enter your name\n";
	cin 	>> userinput;
	ifso.open("name.txt", fstream::in);

	if(ifso)
	{
		while(ifso >> readname) {
			if( strcmp(readname, userinput) == 0){
				cout << readname << " Found\n";
				break;
			}
		}
		if(!ifso)
			cout << "Not Found\n";
	}

}
