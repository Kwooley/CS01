#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    ofstream    ofs;

    string     str = "12345";
    ofs.open("t.bin");

    ofs.write((char *)&str, sizeof(str));
    cout << "size " << sizeof(str) << endl;
    str = "67890";
    ofs.write((char *)&str, sizeof(str));
    cout << "size " << sizeof(str) << endl;

    ofs.close();
}