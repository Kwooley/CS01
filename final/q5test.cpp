#include    <iostream>
#include    <fstream>
#include    <iomanip>
using namespace std;

const unsigned short N=5;
struct  Scores{
    double  sc[N];
    string  grade;
};
struct Grade{
    string  first;
    string  last;
    string  ssn;
    Scores  score;
};
Grade g;
void printstruct(Grade);
int main()
{
    ifstream    ifs;

    ifs.open("grades.bin");
    if(! ifs ){
        cout << "File Open Error : Sure that there is the file grades.bin \n";
        exit(0);
    }

    while ( ifs.read((char *)&g, sizeof(g))){
        printstruct(g);
    }
}
void printstruct(Grade g)
{
    cout << "Name : " << g.first << " " << g.last << "\t" << " SSN: " << g.ssn << "\n";
    cout << "\tScores: " ;
    for(int i=0; i<N;i++)
        cout << showpoint << setprecision(2) << g.score.sc[i] << "\t" ;
    cout << "Grade " << g.score.grade << endl;

}