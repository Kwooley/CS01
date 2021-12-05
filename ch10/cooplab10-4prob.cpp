#include <iostream>
#include <cstring>
using namespace std;

int  	stringLength(const char []);
void 	stringCopy(char [], const char[]);
int 	stringCompare(const char [], const char []);
int 	stringSplit(const char [], char [][100], char );
int main()
{
	const int SIZE=100;
	char mystr[SIZE] = "C++,Programming,section,04";
	char dest[SIZE];
	char splitlist[10][SIZE];
	int 	length, cnt;

	length = stringLength(mystr);
	cout << "The length of mystr " << length << endl;

	//*2 stringCopy
	stringCopy(dest, mystr);
	cout << "Copied string " << dest << endl;
	//*3 stringCompare
	int ret = stringCompare(dest, mystr);
	cout << "Compare result " << ret << endl;
	//*4 stringSplit
	cnt = stringSplit(mystr, splitlist, ',');
	for(int i=0; i<cnt; i++)
		cout << "Split list " << splitlist[i] << endl;
}
int stringSplit(const char source[], char dest[][100], char delimiter)
{
	
}
int stringCompare(const char dest[], const char source[])
{

}

void stringCopy(char dest[], const char source[])
{
	
}
int stringLength(const char str[])
{
	
}
