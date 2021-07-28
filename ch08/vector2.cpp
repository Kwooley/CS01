#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void makeVector(vector<int> & , int);
void printVector(vector<int> , int);
int main()
{
    const int N=10;
    vector<int> numbers(N);

    makeVector(numbers, N);
    printVector(numbers, N);
    sort(numbers.begin(), numbers.end());
    printVector(numbers, N);

}

void makeVector(vector<int> &numbers, int N)
{
    srand(time(0));
    for(int i=0; i<N; i++)
        numbers[i] = rand() % 100;
    
}
void printVector(vector<int> numbers, int N)
{
    for(int i=0; i<N; i++)
        cout << numbers[i] << "\t" ;
    cout << endl;
}