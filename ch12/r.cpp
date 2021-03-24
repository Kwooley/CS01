#include <fstream>
#include <iostream>
using namespace std;

int main() {
        ifstream ifs;
        double d;
        int i;
        struct Student {
                int id;
                string name;
        };
        Student s;
        ifs.open("test.bin", ios::in | ios::binary);

        ifs.read((char *)&d, sizeof(d));
        cout << "The next read 8 bytes " << d << endl;
        ifs.read((char *)&i, sizeof(i));
        cout << "The next read 8 bytes " << i << endl;
        cout << sizeof(s) << endl;
        ifs.read((char *)&s, sizeof(s));
        cout << "The next read " << sizeof(s) << " bytes " << s.id << " " << s.name << endl;

        ifs.close();
}