#include <iostream>
using namespace std;
const int SIZE1 = 5;
const int SIZE2 = 11;

int     isSubset1(int [], int []);  // isSubset(A,B) means that B inlcudes A
int     isSubset2(int [], int []);  // isSubset(A,B) means that B inlcudes A

int main()
{
	int numbers1[SIZE1] = {2, 3, 5, 9, 10};
	int numbers2[SIZE2] = {1, 2, 3, 4, 5, 9, 10, 11, 13, 15, 17};

    // Option 1
    if ( isSubset1(numbers1, numbers2)) 
        cout << " The array Numbers1 includes Number 2\n";
    else
        cout << " The array Numbers1 does not include Number 2\n";

    // Option 2
    if ( isSubset2(numbers1, numbers2)) 
        cout << " The array Numbers1 includes Number 2\n";
    else
        cout << " The array Numbers1 does not include Number 2\n";

}
int isSubset1(int n1[], int n2[])
{
    int i,j;
    for(i=0; i<SIZE1; i++)
    {
        for(j=0; j<SIZE2; j++) 
            if ( n1[i] == n2[j] )
                break;
        if (j == SIZE2)
            return 0;
    }
    return 1;
}
int isSubset2(int n1[], int n2[])
{
    int i=0,j;
    for(j=0; j<SIZE2; j++)
    {
        if ( n2[j] == n1[i] ){
            i++;   
        }
    }
    if ( i == SIZE1)
        return 1;
    else 
        return 0;
}