// Cooperative Programming Lab 10-2

#include <cctype>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

void tolowerstring(char[]);
bool exactmatch(char[], char[]);
bool partialmatch(char[], char[]);

int main() {
        ifstream ifso;
        char name[20];
        char readline[20], userinput[20];

        cout << "Enter your input\n";
        cin >> userinput;

        tolowerstring(userinput);
        ifso.open("ny2018.txt", fstream::in);
        if (ifso) {
                while (ifso >> readline) {
                        tolowerstring(readline);
                        if (exactmatch(readline, userinput))
                                cout << "Exact match found " << readline << endl;
                        else if (partialmatch(readline, userinput))
                                cout << "Partial match found " << readline << " includes " << userinput << endl;
                }
        }
}
void tolowerstring(char str[]) {
}
bool exactmatch(char readline[], char userinput[]) {
}
bool partialmatch(char readline[], char userinput[]) {
}
