
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and 
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer. 
//**    If we have negative input, just quit the program. 


#include        <iostream>
#include        <iomanip>
using namespace std;

int main()
{
        const   double PERC19 = 0.2;
        const   double PERC49 = 0.3;
        const   double PERC99 = 0.4;
        const   double PERC100 = 0.5;
        const   double Price = 99.00;
        double  totalCost, originalAmount, discountAmount, dRate;
        int     numberofSold;

        cout << "Enter the number of units sold\n";
        cin >> numberofSold;

        // Input Validation
        if ( numberofSold < 0 ){
                cout << "Input should be a positive number\n";
                exit(0);
        }
        if ( numberofSold < 10 )
                dRate = 1.0; 
        else if ( numberofSold < 20 )
                dRate = PERC19;
        else if ( numberofSold < 50)
                dRate = PERC49;
        else if ( numberofSold < 100)
                dRate = PERC99;
        else
                dRate = PERC100;

        originalAmount = numberofSold * Price;
        discountAmount = originalAmount * dRate;
        totalCost = originalAmount - discountAmount;

        cout << setprecision(2) << fixed;
        cout << "Original amount is " << originalAmount << endl;
        cout << "Discount amount is " << discountAmount << endl;
        cout << "Total Price is " << totalCost << endl; 
        
}