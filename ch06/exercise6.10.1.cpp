
#include <iostream>
using namespace std;

void function1(void);
void function2(void);

//* Global Variable
int Num = 99;

int main()
{
    Num  += 1;
    function1();
    function2();
    cout << "Global Variable Num in Main\t" << Num << endl; //* 102
}

void function1()
{
    int local1;
    local1 = 1;
    //local2 = 10; //* Error 
    cout << "Local variable local1 in function1\t " << local1 << endl; //* local1= 1.
    cout << "Global Variable Num in function1\t" << Num << endl; //* 100
    Num += 1;
}

void function2()
{
    int local2;
    local2 = 2;
    //local1 = 100; //* Error
    cout << "Local variable local1 in function2\t " << local2 << endl;
    cout << "Global Variable Num in function2\t" << Num << endl; //* 101
    Num += 1;
}