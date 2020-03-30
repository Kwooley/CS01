#include    <iostream>
using namespace std;

void statictest(void);

int main()
{
    statictest();
    statictest();

}

void statictest()
{
    int localvar = 100;
    static int i=0, num = 10;

    i++;
    num += 40;
    cout << "Call Number is : " << i << endl;
    cout << "Static variable num : " << num << endl;
}