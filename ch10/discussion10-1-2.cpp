// strcmp, strncmp, strcat, strstr


#include	<iostream>
#include	<fstream>
#include	<cstring>
#include	<cctype>
using namespace std;

int main()
{
	ifstream	ifso;
	char		readname[20];
	char		userinput[20];
	int			flag=0;

	cout 	<< "Enter your name\n";
	cin 	>> userinput;
	ifso.open("name.txt", fstream::in);

	if(ifso)
	{
		while(ifso >> readname) {
			if( strncmp(readname, userinput, strlen(userinput)) == 0){
				cout << readname << " Found\n";
				flag = 1;
			}
		}
		if(!flag)
			cout << "Not Found\n";
	}

}
