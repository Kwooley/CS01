#include    <iostream>
#include    <string>
using namespace std;

int main()
{
    string str1="C++ Programming";
    string::iterator it;
    string::reverse_iterator rit;

    for(int i=0;i<str1.length(); i++)
        cout << str1[i];
    cout << endl;
    for(it=str1.begin(); it != str1.end(); it++)
        cout << *it;
    cout << endl;
    for(rit=str1.rbegin(); rit != str1.rend(); rit++)
        cout << *rit ;
    cout << endl;

}