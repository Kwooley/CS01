#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;
    //*** Your code 
    for(int i=0;i<SIZE; i++) 
        sum += numbers[i] ;
    for(int i=0;i<SIZE; i++) 
        diff[i] = sum - numbers[i];
    
    cout << "Array Name : " << "\t";
    for(int i=0;i<SIZE; i++) 
        cout << i << "\t";
    cout << endl;
    cout << "Numbers : " << "\t";
    for(int i=0;i<SIZE; i++) 
        cout << numbers[i] << "\t"; 
    cout << endl;
    cout << "Difference : " << "\t";
    for(int i=0;i<SIZE; i++) 
        cout << diff[i] << "\t"; 
    cout << endl;
}