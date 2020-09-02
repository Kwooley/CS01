#include <iostream>
using namespace std;

void getuserinput(int &, int &);
int main()
{

    int inputA, inputB;

    getuserinput(inputA, inputB);
    cout << inputA << inputB << endl;

}

void getuserinput(int &n1, int &n2)
{
    cout << "Enter two integers\n";
    cin >> n1 >> n2;
    return;
}
