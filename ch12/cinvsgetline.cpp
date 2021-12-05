#include <iostream>
using namespace std;

int main() {
        string name;

        cout << "Enter the name: ";
        cin >> name;  // When you give "John Doe", ">>" operator just rest first word since it reads until any blank character (space, tab, newline)
        cout << name << endl;

        cin.ignore();
        cout << "Enter the name: ";
        getline(cin, name);  // the same as cin >> name
        cout << name << endl;

        cout << "Enter the name: ";
        getline(cin, name, '\n');  // this enable us to read whole line until the '\n' is encountered.
        cout << name << endl;
}