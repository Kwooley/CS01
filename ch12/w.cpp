#include <fstream>
#include <iostream>
using namespace std;

int main() {
        ofstream ofs;
        char cstr[100] = "Character Array";
        int i = 100;
        double d = 1234.5678;
        string str = "String Object";
        struct Student {
                int id;
                string name;
        };
        Student s = {10, "student name"};
        ofs.open("test.bin", ios::out | ios::binary);

        ofs.write((char *)&d, sizeof(d));
        ofs.write((char *)&i, sizeof(i));
        ofs.write((char *)&s, sizeof(s));
        cout << sizeof(s) << endl;
        ofs.close();
}