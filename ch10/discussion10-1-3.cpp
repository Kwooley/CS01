// strcmp, strncmp, strcat, strstr
// Read all lines from the file "name.txt"
// and then concatenate all names into one c-string.


#include	<iostream>
#include	<fstream>
#include	<cstring>
#include	<cctype>
using namespace std;

int main()
{
	ifstream	ifso;
	char		readname[20];
	char		concatname[100];

	ifso.open("name.txt", fstream::in);

	if(ifso) {
		while(ifso >> readname) {
			cout << "Read name : " << readname << endl;
			strcat(readname, " ");
			strcat(concatname, readname);
		}
	}
	cout << "All concatenated name list : " << concatname << endl;

}
