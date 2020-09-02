#include    <iostream>
#include    <cstring>
#include    <cstdlib>
#include    <ctime>
using namespace std;

void    stringConcat2(char [], char []);
void    stringConcat(char [], char []);
bool    lessthan(char [], char []);

int main()
{
    const   unsigned short MAX=100;
    char    cstr1[MAX]="aaa", cstr2[MAX]="aaabbb";
    srand(time(0));

    stringConcat2(cstr1, cstr2);
    strcpy(cstr1, "xxxyyy"); strcpy(cstr2,"xxx");
    stringConcat2(cstr1, cstr2);
}

void    stringConcat2(char cstr1[], char cstr2[])
{
    if ( lessthan(cstr1, cstr2)){
        stringConcat(cstr1, cstr2);
        cout << "Concatenated String: " << cstr1 << endl;   
    }
    else{
        stringConcat(cstr2, cstr1);
        cout << "Concatenated String: " << cstr2 << endl;   
    }
}
bool    lessthan(char cstr1[], char cstr2[])
{
    int i=0, j=0;
    while( (cstr1[i] != '\0') && (cstr2[j] != '\0') )
    {
            if ( cstr1[i] < cstr2[j] )
                return true;
            if ( cstr1[i] > cstr2[j] )
                return false;
            i++; j++;
    }
    if (cstr1[i] == '\0')
        return true;
    return false;
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