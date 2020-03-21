
#include <iostream>
using namespace std;

void function1(void);
void fuuction2(void);

//* Global Variable
int Num = 99;

int main()
{
    Num  += 1;
    function1();
    function2();
    cout << Num << endl; //* 102
}

void function1()
{
    int local1;
    local1 = 100;
    // local2 = 10; //* Error 
    cout << local1 << endl;
    cout << Num << endl; //* 100
    Num += 1;
}

void function2()
{
    int local2;
    local2 = 10;
    // local1 = 100; //* Error
    cout << local2 << endl;
    cout << Num << endl;  //* 101
    Num += 1;
}