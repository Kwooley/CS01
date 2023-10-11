#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
        int rdnum;
        int i;
        int pnum;
        srand(time(0));

        pnum = INT_MAX;
        for (i = 0; i < 5; i++) {
                rdnum = rand() % 100;
                cout << "The generated num " << rdnum << endl;
                if (pnum < rdnum)
                        cout << rdnum << endl;
                pnum = rdnum;
        }
}
