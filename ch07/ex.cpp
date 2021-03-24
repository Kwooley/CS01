#include <iostream>
#include <vector>

using namespace std;
int main() {
        vector<int> numbers{10};

        for (int i = 0; i < numbers.size(); i++)
                cout << numbers[i] << endl;
}