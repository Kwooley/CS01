#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;

int getrandNum(void);
void insertOne(int *, int, int *);

const   int N=10;
int main()
{
    int     input;
    int     list[N], length=0;

    srand(time(0));
    for(int i=0; i < N; i++) {
        input = getrandNum();
        cout << "generated : " << input << endl;
        insertOne(list, input, &length);
    }

}
void    insertOne(int *arr, int input, int *length)
{
        int i,j;
        if (*length == 0){
            arr[*length] = input;
            *length += 1;
            return;
        }
        else if (*length >= N){
            cout << "The list is full\n";
            return;
        }
        for(i=0; i< *length; i++) {
            if  ( *(arr+i) > input)
                break;
        }
        for(j= *length-1; j>=i; j--){
            arr[j+1] = arr[j]; 
        }
        arr[i] = input;
        *length += 1;
        for(i=0; i<*length; i++)
             cout << arr[i] << " ";
        cout << endl;
        return;
}
int getrandNum(void)
{
    return rand() % 100; 
}
