#include        <iostream>
#include        <iomanip>
#include        <cmath>
#include        <cstdlib>
#include        <ctime>
using   namespace       std;

int main()
{
    int i,j, stuNum, scoreNum;
    double  sum=0.0, avg;
    double  score[100];
    string  stuName;

    do {
        cout << "Enter the number of students\n";
        cin >> stuNum;
        cout << "Enter the number of scores\n";
        cin >> scoreNum;
	} while ( stuNum < 0 || scoreNum < 0);

    for(i=0; i< stuNum; i++){
        cout << "Enter the student name\n";
        cin >> stuName;
        sum=0.0;
        for( j=0; j<scoreNum; j++){
            cout << "Enter the score " << j+1 << " : ";
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / scoreNum;
        cout << "The student " << stuName << "\t";
        for(j=0; j<scoreNum; j++)
             cout << "Scores " << j+1 << ": " << score[j] << "\t";
        cout << "\n\t\tSum " << sum << "\tAverage " << avg << endl;
    }

}