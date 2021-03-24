#include    <iostream>
using namespace std;

void printtriangle(int numbers[][3], int);
int main()
{
    const int SIZE = 3;
    int numbers[SIZE][SIZE] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
    printtriangle(numbers, SIZE);
}
void printtriangle(int num[][3], int size)
{
    for (int i=0;i<size;i++){
        for(int j=0; j<=i; j++)
            cout << num[i][j] << "\t";
        cout << endl;
    }
}