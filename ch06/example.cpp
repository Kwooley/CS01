#include <iostream>

using namespace std;


int getinput(int &, int &, int &);
int maxmin(int, int, int, int &, int &);
int main()
{
    int num1, num2, num3;
    int max, min;
    
    int getinput(num1, num2, num3);
    int maxmin(num1, num2, num3, max, min);
    cout << "The gap between " << max << "and " << min << ":" << max-min;
}

int getinput(int &num1, int &num2, int &num3)
{
    cin >> num1 >> num2 >> num3;
}

int maxmin(int &num1, int &num2, int &num3, int &max, int &min)
{
    min = num1;
    
    if(num1 > num2)
        num2 = min;
    if(num2 > num3)
        num3 = min;
        
    cout << min;    
        
        
} 