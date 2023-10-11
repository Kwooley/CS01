#include <iostream>
#include <fstream>
using namespace std;

const int MAX_LEN = 20;
const int NUM_SCORES = 3;
struct Students
{
    int sid;
    char sname[MAX_LEN];
    double scores[NUM_SCORES];
};

Students *makeStudents(int);
void printStudents(Students *const, int);
void sortStudents(Students *const, int);

int main()
{
    const int N = 10;
    Students *ptr = nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}
