#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream    ifs;
    char        cstr[100];
    int         i;
    double      d;
    string      str;
    struct  Student{
        int     id;
        string  name;
    };
    Student s;
    ifs.open("bin.out", ios::in|ios::binary);

    ifs.read(cstr, 15);
    cout << "Read 15 bytes from a file " << cstr << endl;           //* Character Array

    ifs.read((char *)&i, sizeof(i));                                 //* Read the next 4 bytes.  integer i.
    cout << "The next read 4 bytes "  << i << endl; 

    ifs.read((char *)&d, sizeof(d));
    cout << "The next read 8 bytes " << d << endl;

    ifs.read((char *)&str, sizeof(str));        //* Read the string object from a binary file.
    cout << "The next read " << sizeof(str) << " bytes " << str << endl;
    ifs.read(cstr, sizeof(str));                //* The second string object was written as a C-string using str.c_str()
    cout << "The next read 24 bytes " << cstr << endl;   //* In the binary file, the value was written as the character array.
                                                //* Thus we should read and store into the Character Array.

    ifs.read((char *)&s, sizeof(s)); 
    cout << "The next read " << sizeof(s) << " bytes " << s.id << " " << s.name << endl;

    ifs.close();

}