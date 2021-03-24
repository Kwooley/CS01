#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
        int arr[] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12};
        int i, j, temp;
        int n = sizeof(arr) / sizeof(arr[0]);

        // Array Sorting - Descending Order
        for (i = 0; i < n; ++i) {
                for (j = i + 1; j < n; ++j) {
                        if (arr[i] < arr[j]) {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
        int count = 1;
        cout << "N Count" << endl;
        for (int i = 0; i < n - 1; i++) {
                if (arr[i] == arr[i + 1]) {
                        count++;
                } else {
                        cout << arr[i] << " " << count << endl;
                        count = 1;
                }
        }
        cout << arr[n - 1] << " " << count << endl;
        return 0;
}