#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void makeVector(vector<int> & , int);
void printVector(vector<int> , int);
void sortVector(vector<int> &, int);
int main()
{
    const int N=10;
    vector<int> numbers(N);

    makeVector(numbers, N);
    printVector(numbers, N);
    sortVector(numbers, N);
    printVector(numbers, N);

}

void makeVector(vector<int> &numbers, int N)
{
    srand(time(0));
    for(int i=0; i<N; i++)
        numbers[i] = rand() % 100;
    
}
void sortVector(vector<int> &numbers, int N)
{
    int minval, minid;
    for(int i=0; i<N; i++)
    {
        minval = numbers[i];
        minid = i;
        for(int j=i+1; j<N; j++)
        {
            if ( minval > numbers[j] )
            {
                minval = numbers[j];
                minid = j;
            }
        }
        numbers[minid] = numbers[i];
        numbers[i] = minval;
    }
}
void printVector(vector<int> numbers, int N)
{
    for(int i=0; i<N; i++)
        cout << numbers[i] << "\t" ;
    cout << endl;
}