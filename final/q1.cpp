//* [1]. The following code tries to swap two values with the function call “myswap(int, int)”. 
//* This code does not generate the correct result. 
//* It prints the original value of variable number1 and number2. 
//* How we can fix this code to give us the swapped value? 
//* Explain the detailed reason for runtime error and show the fixed code.[5pts]
#include    <iostream>
using namespace std;

void    myswap(int, int);
int main()
{
    int     number1=100, number2=200;
    myswap(number1, number2);
    cout << number1 << " " << number2 << endl;

}
void myswap(int value1, int value2)
{
    int tmp;
    tmp = value1;
    value2 = value1;
    value1 = tmp;
    return;
}