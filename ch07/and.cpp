#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num = 1;
    int num2 = 21;
    cout << (num & num2) << endl;
    if ( num & num2)
        cout << "num2" << endl;
    cout << SHRT_MAX << endl;
}