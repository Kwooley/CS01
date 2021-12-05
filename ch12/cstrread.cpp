#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    char    cstr[100];

    ifstream ifs;
    ifs.open("t.bin");

    ifs.read(cstr, 24);
    cout << cstr << endl;
    ifs.read(cstr, 24);
    cout << cstr << endl;
    ifs.close();
}