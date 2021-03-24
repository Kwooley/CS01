#include        <iostream>
#include        <iomanip>
#include        <cmath>
using   namespace       std;

int main()
{

    int i, number, min ;

    for(i=0; i<10; i++){
        cout << "Enter your input \n";
        cin >> number;
        if ( (i==0) || ( min > number) )
            min = number;
    }
    cout << "The min value is " << min << endl;
}