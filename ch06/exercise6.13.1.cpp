#include <iostream>
using namespace std;

void swapvalue1(int , int);
void swapvalue2(int &, int &);

int main()
{
    int num1, num2;

    num1 = 10;
    num2 = 20;
    swapvalue1(num1, num2);
    cout << num1 << num2 << endl; //* What values do you expect?
    swapvalue2(num1, num2);
    cout << num1 << num2 << endl; //* What values do you expect?
}


void swapvalue1(int n1, int n2)
{
    int tmp;
 
    tmp = n1; //* First, keep the value n1 in the tmp variable.
    n1 = n2; //* The value of n2 will be assigned to the n1.
    n2 = tmp; //* The value of tmp will be assigned to the n2.  return;
    return;
}

void swapvalue2(int &n1, int &n2)
{
    int tmp;
 
    tmp = n1; //* First, keep the value n1 in the tmp variable.
    n1 = n2; //* The value of n2 will be assigned to the n1.
    n2 = tmp; //* The value of tmp will be assigned to the n2.  return;
    return;
}