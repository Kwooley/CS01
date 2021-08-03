#include    <iostream>
using namespace std;

int     linearSearch(int [], int, int);

int main()
{
    const int N= 10;
    int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
    int    target, foundindex;

    cout << "Enter the number to find in this array : ";
    cin >> target;

    foundindex = linearSearch(array, N, target);
    if ( foundindex == -1 )
        cout << "The target value was not found \n";
    else
        cout << "The target value " << target << " was found at the index " << foundindex << endl;
}

int linearSearch(int array[], int N, int target)
{
    for(int i=0; i<N; i++)
        if ( array[i] == target)
            return i;
    return -1;
}