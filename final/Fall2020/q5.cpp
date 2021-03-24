#include     <iostream>
#include     <fstream>
#include     <sstream> 
#include     <string>
#include     <iomanip>
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
void    printstruct(Grade);
int main()
{
        ifstream ifs;
        ofstream ofs;
        string  readline;
        stringstream ss;
        string field;
        int i=0,fidx;
        ifs.open("grades.txt", ios::in);
        ofs.open("grades.bin", ios::out|ios::binary);
        if (!ifs) {
            cout << "File Open Error\n";
            exit(0);
        }
        while( getline(ifs, readline, '\n')) {
            ss << readline;
            fidx =0;
            while(getline(ss, field, ',')) {
                // cout << field << "\t";
                switch(fidx){
                    case 0:
                        g.first = field;
                        break;
                    case 1:
                        g.last = field;
                        break;
                    case 2:
                        g.ssn = field;
                        break;
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                        g.score.sc[fidx-3] = stod(field);    
                        break;
                    case 8:
                        g.score.grade = field;
                        break;
                    default:
                        cout << fidx <<  "Field Error\n";
                        exit(0);
                }
                fidx += 1;
            }
            cout << endl;
            printstruct(g);
            ofs.write((char *)&g, sizeof(g));
            ss.clear();
        }
}
void printstruct(Grade g)
{
    cout << "Name : " << g.first << "\t" << g.last << " SSN: " << g.ssn << endl;
    for(int i=0; i<N;i++)
        cout << showpoint << setprecision(2) << g.score.sc[i] << "\t" ;
    cout << "Grade " << g.score.grade << endl;

}