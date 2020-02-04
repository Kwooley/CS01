//? Question 3
//* Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,  \
// * storing the conversion factors in the constants YEN_PER_DOLLAR and UROS_PER_DOLLAR. 
//* To get the most up-to-date exchange rates, search the Internet using the term “currency exchange rate”. If you cannot find the most recent exchange rates, use the following: 
//*     1 Dollar = 109.94 Yen 
//*     1 Dollar = 0.90738 Euros 
//* Format your currency amounts in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.    

#include        <iostream>
using namespace         std;

int     main()
{
        const double YEN_PER_DOLLAR = 109.94;
        const double EUROS_PER_DOLLAR = 0.90738;

        double dollars, yen, euros;

        // input statement
        cout << "Enter the dollars \n";
        cin >> dollars;
        yen = dollars * YEN_PER_DOLLAR;
        euros = dollars * EUROS_PER_DOLLAR;

        // Print the results
        cout << dollars << " dollars is " << yen << " Yen and " << euros << " Euros\n";
        return 0;
}