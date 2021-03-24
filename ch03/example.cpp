#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
        int rdnum = 0;
        string name;

        getline(cin, name);
        //* Seed number;
        srand(time(0));
        //* [0..99]
        rdnum = rand() % 100;
        cout << "Randum number " << rdnum << endl;
}
