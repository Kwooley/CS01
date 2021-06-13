#include <iomanip>
#include <iostream>
using namespace std;

void sum2dbycolumn(int[], int[][5], int, int);

int main() {
        const int NUM_ROWS = 5;  // Number of rows
        const int NUM_COLS = 5;  // Number of columns
        int sum[NUM_COLS] = {0};
        int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
                                           {6, 1, 8, 9, 4},
                                           {4, 3, 7, 2, 9},
                                           {9, 9, 0, 3, 1},
                                           {6, 2, 7, 4, 1}};

        sum2dbycolumn(sum, numbers, NUM_ROWS, NUM_COLS);
        for (int i = 0; i < NUM_COLS; i++)
                cout << "Total sum of column " << i << " is :" << setw(5) << sum[i] << endl;
}

void sum2dbycolumn(int sum[], int num[][5], int rows, int cols) {
        for (int i = 0; i < cols; i++)
                for (int j = 0; j < rows; j++) {
                        sum[i] += num[j][i];
                }
}