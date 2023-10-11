//* Write a program that converts Celsius temperatures to Fahrenheit temperatures. 
//* The formula is 
//*  F = 9/5 * C + 32
//* F is the Fahrenheit temperature, and C is the Celsius temperature.   

#include        <iostream>
using namespace         std;

int     main()
{
        // Declare the variables for Fahrenheit and Celcius.
        double  F, C;

        // Input Statement
        cout << "Enter the temperature by Celcius\n";
        cin >> C;

        // Statement for calculation
        F = 9/5.0 * C + 32;

        // Output 
        cout << "Celcius " << C << " is " << F << " Fahrenheit\n";
        return 0;
}
