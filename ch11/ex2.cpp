//* Ch 11. Nested Structure

#include    <iostream>
using namespace std;
const unsigned short NUMCOURSE = 2;
struct Scores {
    int     scores[NUMCOURSE];
    int     sum;
    int     avg;
};

struct Student {
    int     id;
    string  name;
    Scores  screcord;
} ;

Student S[10];

int main()
{
    for(int i=0; i<10; i++){
        cout << "Enter your id: " ;
        cin >> S[i].id ;
        cout << "Enter your name: " ;
        cin >> S[i].name;
        cout << "Enter your scores: " ;
        cin >> S[i].screcord.scores[0] >> S[i].screcord.scores[1] ;
        S[i].screcord.sum = S[i].screcord.scores[0] + S[i].screcord.scores[1] ;
        S[i].screcord.avg = S[i].screcord.sum / NUMCOURSE; 
    }
}