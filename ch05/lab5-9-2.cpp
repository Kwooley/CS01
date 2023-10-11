#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    cout << "Enter your range \n";
    cin >> begin >> end;
    // Option 1
    for (i = begin; i <= end; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "The sum value is " << sum << endl;

    // Option 2
    sum = 0;
    if (begin % 2)
        begin++;
    for (i = begin; i <= end; i += 2)
    {
        sum += i;
    }
    cout << "The sum value is " << sum << endl;
}