
//?     [Problem Definition]
//*     The Fast Freight Shipping Company charges the following rates:
//*       Weight of Package (in Kilograms)              Rate per 500 Miles Shipped
//*        2 kg or less                                            $1.10
//*        Over 2 kg but not more than 6 kg                        $2.20
//*        Over 6 kg but not more than 10 kg                        $3.70
//*        Over 10 kg but not more than 20 kg                      $4.80
//*     Example
//*        Package weight = 15 kg, Distance = 650 miles
//*             Shipping Price = (distance / 500.0) * rate;
//*                                = 650 / 500.0 * 4.80 

//*     Write a program that asks for the weight of the package and 
//*     the distance it is to beshipped, and then displays the charges.
//** Input Validation : 
//* Do not accept values of 0 or less for the weight of the package. 
//* Do not accept weights of more than 20 kg (this is the maximum weight the company will ship). 
//* Do not accept distances of less than 10 miles or more than 3,000 miles. 
//*     These are the company’s minimum and maximum shipping distances. 

#include        <iostream>
using   namespace std; 
int     main()
{
        const double RATE2 = 1.10;
        const double RATE6 = 2.20;
        const double RATE10 = 3.70;
        const double RATE20 = 4.80;
        double  weight, distance, dRate, price;

        cout << "Enter the package weight and distance\n";
        cin >> weight >> distance ;
        //? Input Validation
        if (( weight < 0 ) && (weight > 20))
        {
                cout << "The package weight must be a positive number and less than 20.\n";
                exit(0);
        }

        if ( weight < 2)
                dRate = RATE2;
        else if ( weight < 6)
                dRate = RATE6;
        else if ( weight < 10)
                dRate = RATE10;
        else if ( weight <= 20)
                dRate = RATE20;
        else {
                cout << "The weight must be less than 20\n";
                exit(0);
        }
        
        if ( distance < 500)
                price = dRate;
        else 
                price = (distance / 500.0) * dRate;
        cout << "The shipping price for package is " << price << endl;

}