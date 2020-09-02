//* Chap 11. Structured Data

#include    <iostream>
#include    <fstream>
using namespace std;

const unsigned short NUMSCORE=2;
struct  Student {
    int     id;
    string  name;
    int     score[NUMSCORE];
    int     sum;
    int     avg;
} ;

Student S[10];  //* Array of Structure Student.

int main()
{
    for(int i=0; i<10; i++) {
        cout << "Enter your id: ";
        cin >> S[i].id;
        cout << "Enter your name: ";
        cin >> S[i].name;
        cout << "Enter two scores: ";
        cin >> S[i].score[0] >> S[i].score[1] ; //* The first index is for the structure array
        S[i].sum = S[i].score[0] + S[i].score[1];
        S[i].avg = S[i].sum / NUMSCORE;
    }
}