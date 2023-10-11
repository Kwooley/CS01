#include <iostream>
using namespace std;

//* Before we go any further,
//* I want to talk about the need of the reference variable.

//* Let's think of the answer for following quick question.
//* How could the function send the changed value to the caller?

//* One of the ways : Using the return value

//* What if we want two or more values to send to the caller?
//* Another way : Using the reference variable

//* Function valuecheck :

void valuecheck(int &, int &);
int main()
{
    int     num1, num2;
    num1 = 100;
    num2 = 200;
    valuecheck(num1, num2);
    cout << "num1 " << num1 << " num2 " << num2 << endl;
}

void valuecheck(int &n1, int &n2)
{
    n1 = 1000;
    n2 = 2000;
    cout << "n1 " << n1 << " n2 " << n2 << endl;

}