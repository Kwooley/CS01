#include    <iostream>
using namespace std;

int main()
{
    int     num1 = 10;
    int     num2 = 20;
    int     &ref1 = num1;

    ref1 = num2;
    cout << "Ref1 " << ref1 << " num1 " << num1 << " num2 " << num2 << endl;
}