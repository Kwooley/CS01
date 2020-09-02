// Question 1 

#include        <iostream>
#include        <iomanip>
using   namespace std;

int     main()
{
        double          rAmount1, rAmount2, rAmount3;
        double          sumAmount, avgAmount;
        string          month1, month2, month3;

        cout << "Enter the first month and rain amount\n";
        cin >> month1 >> rAmount1;
        cout << "Enter the second month and rain amount\n";
        cin >> month2 >> rAmount2;
        cout << "Enter the third month and rain amount\n";
        cin >> month3 >> rAmount3;

        sumAmount = rAmount1 + rAmount2 + rAmount3;
        avgAmount = sumAmount/3;
        cout << "The average rain fall for " << month1 << ", " << month2 << ", and " << month3 ;
        cout << " is " << fixed << setprecision(2) << avgAmount << endl;
}