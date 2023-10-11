#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int N);
void printNumbers(double * const ptr, int N);
void sortNumbers(double * const ptr, int N);
void deleteNumbers(double * ptr);


int main()
{
	const 	int N=10;
	double 	*ptr=nullptr;

	ptr = makeNumbers(N);
	cout << " Initial Double Values \n";
	printNumbers(ptr, N);
	sortNumbers(ptr, N);
	cout << " Sorted Double Values \n";
	printNumbers(ptr, N);
	deleteNumbers(ptr);
}
