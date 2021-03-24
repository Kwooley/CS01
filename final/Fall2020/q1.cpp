#include <iostream>
using namespace std;

int main() 
{
        int number[5] = {-1000, 10, 20, 30, 40};
        for (int i = 0; i < 5; i++)
                if (number[i - 1] > number[i])
                        break;

        if (i == 5)
                cout << "This array has increasing order\n";
}