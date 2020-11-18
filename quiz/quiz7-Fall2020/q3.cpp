#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int findMax(int[], int, int);
void makearray(int numbers[], int SIZE);
void printarray(int numbers[], int size);

int main() {
        const int N = 11;
        int numbers[N];
        int min1, min2;

        srand(time(0));
        makearray(numbers, N);
        printarray(numbers, N);
        min1 = findMax(numbers, 0, N / 2);
        min2 = findMax(numbers, N / 2 + 1, N - 1);
        cout << "The min of the first half " << min1 << endl;
        cout << "The min of the second half " << min2 << endl;
}
int findMax(int numbers[], int start, int end) {
        int min;
        min = numbers[start];
        for (int i = start; i <= end; i++)
                if (min > numbers[i])
                        min = numbers[i];
        return min;
}
void makearray(int numbers[], int SIZE) {
        for (int i = 0; i < SIZE; i++)
                numbers[i] = rand() % 50;
}
void printarray(int numbers[], int size) {
        for (int i = 0; i < size; i++)
                cout << numbers[i] << "\t";
        cout << endl;
}