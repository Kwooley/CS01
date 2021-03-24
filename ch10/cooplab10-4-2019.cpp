#include	<iostream>
using namespace std;

int 	stringLength	(const char [ ]);
void 	stringCopy		(char [ ], const char [ ]);
int 	stringCompare	(const char [ ], const char [ ]);
int 	stringSplit		(const char [ ], char splitlist[][100], char delimiter);

int		main()
{
	char	mystr[] = "C++,Programming,database,section,04";
	char	dest[100];
	char	splitlist[10][100];
	int		length, cmpresult, cnt;

	// 1) stringLength
	length = stringLength(static_cast<const char *>(mystr));
	cout << "The String Length is " << length << endl;

	// 2) stringCopy
	stringCopy(dest, static_cast<const char *>(mystr));
	cout << "String copied: Source : " << mystr << " Destination : " << dest << endl;

	// 3) stringCompare
	stringCopy(dest, static_cast<const char *>("C++ Programming Language"));
	cmpresult = stringCompare(static_cast<const char *>(dest), static_cast<const char *>(mystr));
	cout << "The Compare Result: Source= " << mystr << " Dest: " << dest << " Result : "  << cmpresult << endl;
	stringCopy(dest, static_cast<const char *>("C Programming"));
	cmpresult = stringCompare(static_cast<const char *>(dest), static_cast<const char *>(mystr));
	cout << "The Compare Result: Source= " << mystr << " Dest: " << dest << " Result : "  << cmpresult << endl;

	// 4) stringSplit
	cnt = stringSplit(static_cast<const char *>(mystr), splitlist, ',');
	cout << "Split words count " << cnt << endl;
	for(int i=0; i<cnt; i++)
		cout << "Split words " << splitlist[i] << endl;

}
int stringLength(const char source[ ])
{
	int 	i=0;
	while(source[i] != '\0')
		i++;
	return i;
}
void stringCopy(char dest[ ], const char source[ ])
{
	int i;
	for(i=0; i<strlen(source); i++){
		dest[i] = source[i];
	}
	dest[i] = '\0';
}
int stringCompare(const char dest[ ], const char source[ ])
{
	int	i=0, j=0;
	while( source[i] != '\0' and dest[i] != '\0'  ) {
		if ( source[i] != dest[i])
				return -1;
		i++;
	}
	if ( source[i] == '\0' and dest[i] == '\0')
		return 0;
	if ( source[i] == '\0' )
		return 1;
	if ( dest[i] == '\0' )
		return 2;
	i++;
	return -1;
}
int stringSplit(const char source[ ], char destination[ ][100], char delimiter)
{
	int		i=0,j=0, cnt=0;

	while( source[i] != '\0') {
			destination[cnt][j++] = source[i];
			if ( source[i] == delimiter){
					destination[cnt][j-1] = '\0';
					cnt++;
					j = 0;
			}
			i++;
	}
	destination[cnt][j] = '\0';
	if (j==0)
		cnt--;
	return cnt+1;
}
