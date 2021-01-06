#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
        stringstream ss;
        string str;
        ifstream ifs;

        ifs.open("cany.txt", ios::in);
        getline(ifs, str, '\n');  //* Read one line from a file to the new line char.
        ss << str;                //* The read line goes to the string stream.

        getline(ss, str, ',');  //* read the word until the delimiter ',' from the string stream
        cout << str << endl;
        getline(ss, str, ',');  //* read the word until the delimiter ',' from the string stream
        cout << str << endl;
        getline(ss, str, ',');  //* read the word until the delimiter ',' from the string stream
        cout << str << endl;
        getline(ss, str, ',');  //* read the word until the delimiter ',' from the string stream
        cout << str << endl;
        getline(ss, str, ',');  //* Reading stops if the EOF is reached
        cout << str << endl;
}