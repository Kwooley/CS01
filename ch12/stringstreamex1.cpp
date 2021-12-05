#include <iostream>
#include <sstream>      //* for String Stream

using namespace std;

int main()
{
    stringstream    ss;
    string          str;

    str = "C++,Programming";
    ss << str;                  //* The string stream ss can be used as a input stream like a "cin",
                                //* which has the string value "C++,Programming".
    getline(ss, str, ',');      //* The first parameter is the string stream. It reads from the ss.
    cout << str << endl;    //* C++ 
}