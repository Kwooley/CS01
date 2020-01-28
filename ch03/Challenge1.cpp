#include        <iostream>
#include        <iomanip>
using namespace std;

int     main()
{
        // Price rate
        const double rateA = 15.00;
        const double rateB = 12.00;
        const double rateC = 9.00;

        // Variabls for the number of tickets
        int     numA, numB, numC;
        // Variables for the prices of each class
        double  salesA, salesB, salesC, totalSales;

        cout << "How many tickets were sold for Class A\n";
        cin >> numA;
        cout << "How many tickets were sold for Class B\n";
        cin >> numB;
        cout << "How many tickets were sold for Class C\n";
        cin >> numC;

        salesA = numA * rateA;
        salesB = numB * rateB;
        salesC = numC * rateC;
        totalSales = salesA + salesB + salesC;

        cout << setprecision(2) << fixed;
        cout << "Tickets sold for Class A " << numA << " Sales Price for A \t" << salesA << endl;
        cout << "Tickets sold for Class B " << numB << " Sales Price for B \t" << salesB << endl;
        cout << "Tickets sold for Class C " << numC << " Sales Price for C \t" << salesC << endl;
        cout << "Total Sales " << setw(35) << totalSales << endl;
}