#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

void makearray(int []);
void printarray(int []);
void  lessthan(int []);

const unsigned int MAX=5;
int main()
{
    int     number[MAX];
    srand(time(0));

    makearray(number);
    printarray(number);
    lessthan(number);
}
void lessthan(int num[])
{
    int count;
    cout << "The number of elements that are less than each element \n";
    for(int i=0; i<MAX; i++){
        count = 0; 
        for(int j=0; j<MAX; j++){
            if ( num[i] >= num[j] )
                count += 1;
        }
        cout << count-1 << "\t";
    }
    cout << "\n";
}
void makearray(int num[])
{
    for(int i=0;i<MAX; i++)
        num[i] = rand()%10;
}
void printarray(int num[])
{
   for(int i=0;i<MAX; i++)
        cout << num[i] << "\t" ;
    cout << endl;
}
