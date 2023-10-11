#include <fstream>
#include <iostream>
using namespace std;

int main()
{
        ifstream ifs;
        string stname;
        int score1, score2, sum;
        int totalnum = 0;
        double avg;

        ifs.open("students.txt");
        if (!ifs)
        {
                cerr << "File Open Error\n";
                exit(0);
        }
        while (ifs >> stname >> score1 >> score2)
        {
                sum = score1 + score2;
                avg = sum / 2.0;
                if (avg > 80)
                        totalnum++;
                cout << stname << endl;
        }
}