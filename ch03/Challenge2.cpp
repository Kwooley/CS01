#include        <iostream>
#include        <iomanip>
using namespace std;

int     main()
{
        // variables for the number of males and females
        int     numM, numF;

        // variables for the percentage of males and females
        float   percentM, percentF;

        cout << "Enter the number of males and females \n";
        cin >> numM >> numF;

        // Expression to get the percentage
        percentM = numM * 100.0 / (numM+numF) ; 
        percentF = 100 - percentM;
        cout << setprecision(2) << fixed ;
        cout << "The percentage of Male \t " << percentM << "%" << endl;
        cout << "The percentage of Female \t " << percentF << "%" << endl;
}