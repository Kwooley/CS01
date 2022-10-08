#include <iostream>
#include <vector>

using namespace std;
int main() {
        vector<int> numbers{10};
        string str = "C programming";
        char str2[]= "C Programming";


        for (int i = 0; i < numbers.size(); i++)
                cout << numbers[i] << endl;
        cout << str;
        cout << str2;
}