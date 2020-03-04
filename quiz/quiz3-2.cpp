#include    <iostream>
using namespace std;

int main()
{
    int powernum=1;
    int i, baseNum, exponent;
    do {
        cout << "Enter your Base Number: " ;
        cin >> baseNum;
        cout << "Enter your Exponent:" ;
        cin >> exponent;
    } while( (baseNum < 1) || (baseNum > 10) || (exponent < 1) || (exponent > 10));
    cout << "The number " << baseNum << " to the power number \n";
    for(i=0; i<exponent; i++) {
        powernum *= baseNum;
        cout << i+1 << " is \t" << powernum << endl ;
    }
    cout << endl;

}