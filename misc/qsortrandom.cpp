#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

int split(int [], int, int);
void qsort(int [], int, int);
void makenum(int [], int);
int main()
{
    const int SIZE = 11;
    int pivot_index;
    int num[SIZE];
    srand(time(0));
    makenum(num, SIZE);
    for(int v : num)
        cout << v << "\t";
    cout << endl;
    qsort(num, 0, SIZE-1);
    for(int v : num)
        cout << v << "\t";
    cout << endl;
}
void qsort(int num[], int startindex, int lastindex)
{
    int pivotindex;
    if (lastindex <= startindex)
        return;
    pivotindex = split(num, startindex, lastindex);
    qsort(num, startindex, pivotindex-1);
    qsort(num, pivotindex+1, lastindex);
    
}
int split(int num[], int startindex, int lastindex)
{
    int pivot,i,j;
    pivot = num[lastindex];
    i = startindex-1; j=startindex;
    while(j<lastindex)
    {
        if ( num[j] < pivot) {
            i += 1;
            swap(num[i],num[j]);
        }
        j++;
    }
    swap(num[i+1], num[lastindex]);
    return i+1;
}

void makenum(int n[], int size)
{
    for(int i=0;i<size;i++)
    {
        n[i] = rand() % 20;
    }
}