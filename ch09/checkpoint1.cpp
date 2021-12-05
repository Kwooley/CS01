#include <iostream>
using namespace std;

int main()
{
    int x = 50, y = 60, z = 70;
    int *ptr = nullptr;
    cout << x << " " << y << " " << z << endl;
    ptr = &x;

    *ptr *= 10;
    ptr = &y;
    *ptr *= 5;
    ptr = &z;
    *ptr *= 2;
    cout << x << " " << y << " " << z << endl;

}