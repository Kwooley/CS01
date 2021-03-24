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
	int i=0, j=0, cnt=0;
	while( source[i] != '\0'){ 
		dest[cnt][j++] = source[i] ;
		if ( source[i] == delimiter){
			dest[cnt][j-1] = '\0';
			cnt++;
			j = 0;
		}
		i++;
	}
	dest[cnt][j] = '\0';
	if ( j==0)
		cnt--;
	return cnt+1;
}
int stringCompare(const char dest[], const char source[])
{
	int i=0;
	while ( dest[i] != '\0' && source[i] != '\0')
	{
		if ( dest[i] != source[i])
			return -1;
		i++; 
	}
	if ( dest[i] == '\0' && source[i] == '\0')
		return 0;
	if ( dest[i] == '\0')
		return 1;
	if ( source[i] == '\0')
		return 2;
	return -1;
}

void stringCopy(char dest[], const char source[])
{
	int i;
	for(i=0; i<strlen(source);i++)
		dest[i] = source[i];
	dest[i] = '\0';
}
int stringLength(const char str[])
{
	int i=0;
	while( str[i] != '\0')
		i += 1;
	return i;
}
