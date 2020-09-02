// Cooperative Programming Lab 10-2

#include		<iostream>
#include		<fstream>
#include		<cstring>
#include		<cctype>
using namespace	std;

void	tolowerstring(char []);
bool	exactmatch(char [], char[]);
bool	partialmatch(char [], char[]);

int		main()
{
	ifstream	ifso;
	char		name[20];
	char		readline[20], userinput[20];

	cout << "Enter your input\n";
	cin  >> userinput;

	tolowerstring(userinput);
	ifso.open("ny2018.txt", fstream::in);
	if (ifso){
		while( ifso >> readline){
			tolowerstring(readline);
			if (exactmatch(readline, userinput))
				cout << "Exact match found " << readline << endl;
			else if (partialmatch(readline, userinput)) 
				cout << "Partial match found " << readline << " includes " << userinput << endl;
		}
	}
}
void	tolowerstring(char str[])
{
	int 	len;
	len = strlen(str);
	for(int i=0; i<len; i++){
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
}
bool	exactmatch(char readline[], char userinput[])
{
	if (strcmp(readline, userinput) == 0 )
		return true;
	else
		return false;
}
bool	partialmatch(char readline[], char userinput[])
{
	char	*pos;
	pos = strstr(readline, userinput);
	if (pos)
		return true;
	else
		return false;
}


