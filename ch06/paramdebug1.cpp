#include    <iostream>
using namespace std;

void myfunction(int);

int main()
{
    int     number;
    number = 10;

    myfunction(number);
    cout << number << endl;
}
void    myfunction(int value)
{
    cout << value << endl;
    value = 100;
    cout << value << endl;
    return;
}
