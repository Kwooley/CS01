#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct date {
        string month;
        int day;
        int year;
};

struct employee {
        int id;
        string fname;
        string lname;
        long salary;
        string department;
        date start;
};

int createArray(employee[]);
int highSalary(employee[], int);
int findComputer(employee[], int);

int SIZE = 100;

int main() {
        int a, b, c;
        employee array[SIZE];

        a = createArray(array);
        cout << "There are " << a << " employees in the structure array. \n\n";

        b = highSalary(array, a);
        cout << "\n"
             << b << " employees make over $100,000. \n";

        c = findComputer(array, a);
        cout << "\n"
             << c << " employees work in the 'Computer' department. \n";

        return 0;
}

int createArray(employee array[]) {
        // links and opens file "employee.txt"
        ifstream file;
        file.open("employee.txt");

        if (!file) {
                cout << "This file could not be opened. \n";
                exit(0);
        }

        // creates integer for array
        int i = 0;

        // puts information in array
        while (file >> array[i].id >> array[i].fname >> array[i].lname >> array[i].salary >> array[i].department >> array[i].start.month >> array[i].start.day >> array[i].start.year) {
                i++;
        };

        return i;
}

int highSalary(employee array[], int a) {
        int i = 0;
        int j = 0;
        for (; i < a; i++) {
                if (array[i].salary >= 100000) {
                        cout << array[i].id << "\t"
                             << array[i].fname << "\t"
                             << array[i].lname << "\t"
                             << array[i].salary << "\t"
                             << array[i].department << "\t"
                             << array[i].start.month << "\t"
                             << array[i].start.day << "\t"
                             << array[i].start.year << endl;
                        j++;
                }
        }

        return j;
}

int findComputer(employee array[], int a) {
        int i = 0;
        int j = 0;
        for (; i < a; i++) {
                if (array[i].department == "Computer") {
                        cout << array[i].id << "\t"
                             << array[i].fname << "\t"
                             << array[i].lname << "\t"
                             << array[i].salary << "\t"
                             << array[i].department << "\t"
                             << array[i].start.month << "\t"
                             << array[i].start.day << "\t"
                             << array[i].start.year << endl;
                        j++;
                }
        }

        return j;
}