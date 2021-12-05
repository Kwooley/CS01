#include <iostream>
using namespace std;

int main()
{
    int x,y;

    cout << "Enter your coodinates\n";
    cin >> x >> y;

    if ( x < 0 ) 
        x *= -1;
    if ( y < 0 )
        y *= -1;

    cout << "Converted coordinate is " << x << "," << y << endl;
}