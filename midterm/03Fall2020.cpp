#include <iostream>
using namespace std;

void getInput(int &, int &, int &);
void swapAll(int &, int &, int &);
void printAll(int, int, int);
void swap(int &, int &);

int main() {
        int n1, n2, n3;
        getInput(n1, n2, n3);
        printAll(n1, n2, n3);
        swapAll(n1, n2, n3);
        printAll(n1, n2, n3);
}
void printAll(int n1, int n2, int n3) {
        cout << "n1: " << n1 << "\t"
             << "n2: " << n2 << "\t"
             << "n3 " << n3 << "\t" << endl;
}

void getInput(int &n1, int &n2, int &n3) {
        cout << "Enter three integers: ";
        cin >> n1 >> n2 >> n3;
}

void swapAll(int &n1, int &n2, int &n3) {
        swap(n1, n2);
        swap(n2, n3);
}
void swap(int &n1, int &n2) {
        int tmp;
        tmp = n1;
        n1 = n2;
        n2 = tmp;
}