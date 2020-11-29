
#include <fstream>
#include <iostream>
using namespace std;

int countsubstring(string);
int main() {
        int cnt;

        cnt = countsubstring("th");
        cout << "The count of occurrence " << cnt << endl;
}
int countsubstring(string keystring) {
        int found, start, count = 0;
        ifstream ifs;
        string readstring;
        ifs.open("python.txt");
        if (!ifs) {
                cout << "File Open Error\n";
                exit(0);
        }
        while (ifs >> readstring) {
                start = 0;
                while (((found = readstring.find(keystring, start)) != string::npos)) {
                        count += 1;
                        cout << "found in " << readstring << " "
                             << "at " << found << endl;
                        start = found + 1;
                }
        }
        return count;
}
