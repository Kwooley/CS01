#include    <iostream>
using namespace std;

int main()
{
    int number[5]={-200, 10, 20, 30, 40};
    int i;
    for(i=0; i<5; i++)
        if ( number[i-1] > number[i])
            break;

    if ( i == 5)
        cout << "This array has increasing order\n";
}