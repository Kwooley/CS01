#include    <iostream>
#include    <cctype>
#include    <cmath>
using namespace std;

bool    isalphaAtoF(char );
bool    isalphaatof(char );
void    gethexanumber(char []);
int     converthextodec(char []);
int main()
{
    char    hex[10];
    int     decimalnum;

    gethexanumber(hex);
    cout << "Hexa number is " << hex << "\n";
    decimalnum = converthextodec(hex);
    cout << "The converted decimal number is " << decimalnum << endl;
}
int     converthextodec(char hex[])
{
    int num, unit;
    int dec=0;
    for(int i=0;i<strlen(hex);i++){
        if ( isdigit(hex[strlen(hex)-i-1]) ){
            num = (int)hex[strlen(hex)-i-1]-48;
        }
        else  {
            switch(hex[strlen(hex)-i-1]){
                case 'A':
                    num = 10;
                    break;
                case 'B':
                    num = 11;
                    break;
                case 'C':
                    num = 12;
                    break;
                case 'D':
                    num = 13;
                    break;
                case 'E':
                    num = 14;
                    break;
                case 'F':
                    num = 15;
                    break;
                default:
                    cout << "Convert Error\n";
                    exit(0);
            }
        }  
        unit = pow(16,i);
        dec += unit * num;
    }
    return dec;
}
void gethexanumber(char hex[])
{
    cout << "Enter Hexa number(0-9,A-F)\n";
    cin >> hex;
    for(int i=0;i<strlen(hex);i++) {
        if ( isdigit(hex[i]) || isalphaAtoF(hex[i]))
            continue;
        if ( isalphaatof(hex[i]) ){
            hex[i] = toupper(hex[i]);
            continue;
        }
        cout << "Input Error. 0-9, A-Z, a-z\n";
        exit(0);
    }
    return;
}
bool    isalphaAtoF(char c)
{
    if ( c < 65 || c > 70)
        return false;
    else    
        return true;

}
bool    isalphaatof(char c)
{
    if ( c < 97 || c > 102)
        return false;
    else    
        return true;

}
