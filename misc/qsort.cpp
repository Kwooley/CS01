#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

int split(int [], int, int);
void qsort(int [], int, int);
void printarray(int [], int, int);
int main()
{
    const int SIZE = 7;
    int num[SIZE] = {1, 8, 5, 9, 4, 3, 7};
    printarray(num, 0, SIZE-1);
    qsort(num, 0, SIZE-1);
    printarray(num, 0, SIZE-1);
}
void qsort(int num[], int startindex, int lastindex)
{
    int pivotindex;
    if (lastindex <= startindex)
        return;
    pivotindex = split(num, startindex, lastindex);
    printarray(num, startindex, lastindex);
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
void printarray(int arr[], int s, int e)
{
    for(int i=s;i<=e;i++)
        cout << arr[i] << "\t";
    cout << endl;
}