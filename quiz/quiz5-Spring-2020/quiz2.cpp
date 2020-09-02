#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

void makearray(int []);
void printarray(int []);
void  longest(int []);

const unsigned int MAX=10;
int main()
{
    int     number[MAX] ;
    srand(time(0));

    makearray(number);
    printarray(number);
    longest(number);
}
void longest(int num[])
{
    int     length=1;
    int     maxlength = -1;
    int     end, maxend;

    for(int i=1;i<MAX;i++){
        if (num[i-1] < num[i]) {
            length += 1;
            end = i;
        }
        else{
            length = 1;
            end = i - 1; 
        }
        if ( maxlength < length){
            maxlength = length;
            maxend = end;
        }
    }

    cout << "The longest increasing length " << maxlength << endl;
    for(int i=maxend-maxlength+1; i<=maxend;i++)
        cout << num[i] << "\t";
    cout << endl;
}
void makearray(int num[])
{
    for(int i=0;i<MAX; i++)
        num[i] = rand()%10;
}
void printarray(int num[])
{
   for(int i=0;i<MAX; i++)
        cout << i << "\t" ;
    cout << endl;
   for(int i=0;i<MAX; i++)
        cout << num[i] << "\t" ;
    cout << endl;
}
