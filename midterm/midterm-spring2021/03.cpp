#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

int getRdnum();
int isGreater(int);

const int N = 10;
int main() {
        int rdnum;
        ofstream ofs;
        srand(time(0));

        ofs.open("numbers.txt");
        if (!ofs) {
                cerr << "File Open Error\n";
                exit(0);
        }
        for (int i = 0; i < N; i++) {
                rdnum = getRdnum();
                cout << rdnum << "\t";
                if (isGreater(rdnum)) {
                        ofs << rdnum << endl;
                }
        }
        cout << endl;
        ofs.close();
}
int getRdnum() {
        return rand() % 50 + 1;
}
int isGreater(int n) {
        static int prec_num = 0;
        if (prec_num == 0) {
                prec_num = n;
                return 0;
        }
        if (prec_num < n) {
                prec_num = n;
                return 1;
        } else {
                prec_num = n;
                return 0;
        }
}