#include    <iostream>
#include    <cstring>
#include    <cstdlib>
#include    <ctime>
using namespace std;

void    getcstr(char []);
void    stringConcat(char [], char []);

int main()
{
    const   unsigned short MAX=100;
    char    cstr1[MAX], cstr2[MAX];
    srand(time(0));
    getcstr(cstr1);
    getcstr(cstr2);

    stringConcat(cstr1, cstr2);
    cout << "Concatenated String: " << cstr1 << endl;
}
void    getcstr(char cstr[])
{
    int     size,i;
    size = rand() % 10 + 1;
    for(i=0;i<size; i++)
        cstr[i] = rand() % 26 + 97;
    cstr[i] = '\0';
    cout << "string: " << cstr << endl;
}
void    stringConcat(char cstr1[], char cstr2[])
{
    int     len1,i,j;
    i = strlen(cstr1);
    j=0;
    while( cstr2[j] != '\0'){
        cstr1[i++] = cstr2[j++];
    }
    cstr1[i] = '\0';
}