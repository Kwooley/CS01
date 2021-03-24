#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
        char cstr[] = "Programming";
        char cstr2[10];
        int i;

        cout << strlen(cstr) << endl;
        cout << sizeof(cstr) << endl;
        i = 0;
        while (cstr[i] != '\0') {
                cstr2[i] = cstr[i];
                i++;
        }

        cstr2[i] = '\0';
        cout << cstr2 << endl;

        cout << strcmp("ABC", "AB") << endl;
        cout << strcmp("AB", "AB") << endl;
        cout << strcmp("AB", "ABC") << endl;
        cout << strncmp("AB", "ABC", 1) << endl;
        cout << strcat(cstr2, "ABC") << endl;
        char *cptr;
        cptr = strstr(cstr, "B");
        cout << cptr << endl;
}