#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream    ofs;
    char        cstr[100]="Character Array";
    int         i = 100;            //* Write the integer value to the binary file.
    double      d = 1234.5678;            //* Write the double value to the binary file.
    string      str = "String Object";
    struct  Student{
        int     id;
        string  name;
    };
    Student s = {10, "student name"};   //* Write the struct value to the binary file.

    ofs.open("bin.out", ios::out|ios::binary);

    ofs.write(cstr, strlen(cstr));      //* cstr is the array name. Array name has the address for the 1st element.
                    //* The first parameter is the address of memory
                    //* The second parameter is the size of writing.

                    //* cstr is written to the binary file.
    cout << "Character array is written " << strlen(cstr) << " bytes\n"; 

    ofs.write((char *)&i, sizeof(i));     //* The address of integer variable : &i,  and sizeof(i).
                                    //* But, the function write expect the "character" address. Need to cast to the character pointer type. (char *)
    cout << "Integer value 100 is written " << sizeof(i) << " bytes\n"; 
   
    ofs.write((char *)&d, sizeof(d));   
    cout << "Double value 1234.5678 is written " << sizeof(d) << " bytes\n"; 

    ofs.write((char *)&str, sizeof(str));
    cout << "String value is written " << sizeof(str) << " bytes\n";
    ofs.write(str.c_str(), sizeof(str));       //* String has the member function c_str() to convert the character array type.
                                                //* Alternative way to write string to the binary file.
    cout << "String value is written " << sizeof(str) << " bytes\n";
    
    ofs.write((char *)&s, sizeof(s));
    cout << "Structure s is written " << sizeof(s) << " bytes\n";

    ofs.close(); 
}