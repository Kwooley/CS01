#include <iostream>
using namespace std;

int main() {
        char string1[] = "Billy";
        char string2[] = " Bob Jones";
        strcat(string1, string2);
        cout << string1 << endl;
        cout << strlen(string1) << endl;
        cout << sizeof(string1) << endl;
}