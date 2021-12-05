#include <iostream>
using namespace std;

int &retaddr() {
        static int x = 0;
        cout << "Inside the function :" << x << endl;
        x += 10;
        return x;
}
int main() {
        int &ref = retaddr();

        cout << retaddr() << endl;
        ref = 50;
        cout << retaddr() << endl;
        cout << "After call retaddr() :" << ref << endl;
        retaddr() += 30;
        cout << retaddr() << endl;
        return 0;
}
