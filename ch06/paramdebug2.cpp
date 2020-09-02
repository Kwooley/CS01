#include    <iostream>
using namespace std;

void    myfunction(int &, int &);
int main()
{
    int     number1, number2;

    myfunction(number1, number2);
    cout << number1 << number2 << endl;

}
void    myfunction(int &value1, int &value2)
{
    value1 = 100;
    value2 = 200;
    cout << value1 << value2 << endl;
    return;
}