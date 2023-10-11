#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int i, number, max;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter your input: ";
        cin >> number;
        if ((i == 0) || (max > number))
            max = number;
    }
    cout << "The max value is " << max << endl;
}