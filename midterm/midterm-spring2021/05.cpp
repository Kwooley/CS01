#include <fstream>
#include <iostream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int intDivision(int, int);
void fileWrite(ofstream &, int);

int main() {
        int num1, num2;
        int result;
        ofstream ofs;
        ofs.open("question5.txt");
        if (ofs.fail()) {
                cerr << "File open error\n";
                exit(0);
        }
        while (1) {
                getInput(num1, num2);
                if (isSame(num1, num2))
                        break;
                result = intDivision(num1, num2);
                fileWrite(ofs, result);
        }
}
void getInput(int &n1, int &n2) {
        cout << "Enter two numbers \n ";
        cin >> n1 >> n2;
}
int isSame(int n1, int n2) {
        if (n1 == n2)
                return 1;
        else
                return 0;
}
int intDivision(int n1, int n2) {
        if (n1 > n2)
                return n1 / n2;
        else
                return n2 / n1;
}
void fileWrite(ofstream &ofs, int result) {
        ofs << result << endl;
}
