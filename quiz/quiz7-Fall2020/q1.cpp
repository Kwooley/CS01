#include <cmath>
#include <iostream>
using namespace std;

int checkDiff(int[], int);
const int N = 10;

int main() {
        int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

        for (int i = 0; i < N; i++) {
                if (checkDiff(number, i)) {
                        cout << number[i] << " has the difference less than 10\n";
                }
        }
}

int checkDiff(int n[], int i) {
        if (i == 0) {
                if (abs(n[i] - n[i + 1]) < 10)
                        return 1;
        } else if (i == N - 1) {
                if (abs(n[i] - n[i - 1]) < 10)
                        return 1;
        } else {
                if ((abs(n[i] - n[i - 1]) < 10) && (abs(n[i] - n[i + 1]) < 10))
                        return 1;
        }
        return 0;
}