#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    ofs.open("students.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "Enter the total number of students:";
    cin >> N;
    ofs << N << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter the student name and two scores: ";
        cin >> stuName >> score1 >> score2;
        ofs << stuName << "\t" << score1 << "\t" << score2 << endl;
    }
    ofs.close();
}