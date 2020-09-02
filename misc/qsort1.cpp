#include    <iostream>
using namespace std;

void    quicksort(int [], int, int);
int     partition(int [], int, int);
int main()
{
    const int SIZE =7;
    int     num[SIZE] = {1, 8, 5, 9, 4, 3, 7};

    quicksort(num,0,SIZE-1);
    for (int v: num)
        cout << v << "\t";
    cout <<endl;
}
void    quicksort(int num[], int start, int last)
{
    int pivot_index;
    if ( start >= last)
        return;
    pivot_index = partition(num, start, last);
    quicksort(num, start, pivot_index-1);
    quicksort(num, pivot_index+1, last);
}
int     partition(int num[], int start, int last)
{
    int i,j, pivot;
    i = start -1;
    j = start;
    pivot = num[last];
    while(j < last){
        if ( num[j] < pivot){
            i += 1;
            swap(num[i], num[j]);
        }
        j += 1;
    }
    swap(num[i+1], num[last]);
    return i+1;
}