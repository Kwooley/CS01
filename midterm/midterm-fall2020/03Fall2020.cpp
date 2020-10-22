#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

int getRdnum();
int isPrime(int);

const int N = 10;
int main() {
        int rdnum;
        ofstream ofs;
        srand(time(0));

        ofs.open("primenumbers.txt");
        if (!ofs) {
                cerr << "File Open Error\n";
                exit(0);
        }
        for (int i = 0; i < N; i++) {
                rdnum = getRdnum();
                if (isPrime(rdnum)) {
                        ofs << rdnum << endl;
                }
        }
        ofs.close();
}
int getRdnum() {
        return rand() % 30;
}
int isPrime(int n) {
        for (int i = 2; i < n / 2; i++) {
                if (n % i == 0)
                        return 0;
        }
        return 1;
}