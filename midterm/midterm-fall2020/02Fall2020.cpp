#include <fstream>
#include <iostream>
using namespace std;

int main() {
        ifstream ifs;
        string stname;
        int score1, score2, sum;
        double avg;

        ifs.open("students.txt");
        if (!ifs) {
                cerr << "File Open Error\n";
                exit(0);
        }
        while (ifs >> stname >> score1 >> score2) {
                cout << "Studnet name : " << stname << "\t";
                cout << "Score 1: " << score1 << "\t"
                     << "Score 2: " << score2 << "\t";
                sum = score1 + score2;
                avg = sum / 2.0;
                cout << "Sum : " << sum << "\t"
                     << "Avg: " << avg << "\n";
        }
}