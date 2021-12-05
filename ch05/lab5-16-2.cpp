#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    int     N;
    string  stuName;
    double  score1, score2, sum=0, avg;
    double  tsum=0, tavg;
    ifstream    ifs;

    ifs.open("stuRecord.txt");
    if ( !ifs ) {
        cout << "File Open Error\n";
        exit(0);
    }
    if ( ifs >> N ) 
        cout << "Total " << N << " students\n";
    else {
        cout << "Read Error for the number of students\n";
        exit(0);
    }

    for(int i=0; i<N; i++) {
        if ( ifs >> stuName >> score1 >> score2 ){
            cout << "Student Name: " << stuName << "\t";
            cout << "score1:" << score1 << "\tscore2" << score2 ;
            sum = score1 + score2;
            avg = sum / 2.0;
            cout << "\tSum:" << sum << "\tAvg:" << avg << endl;
            tsum += score1 + score2;
        }
    }
    tavg = tsum / 10;
    cout << "Total sum is " << tsum << "\ttotal average:" << tavg << endl;

}