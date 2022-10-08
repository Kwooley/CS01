#include			<iostream>
#include			<iomanip>
using 	namespace	std;
const int			SIZE=10, W=5;

void	printArray(int []);
void	printArray2(int []);
void	printArray3(int []);

int		main()
{
	int			numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

	printArray(numbers);
	printArray2(numbers);
	printArray3(numbers);
}
void	printArray(int n1[])
{
	for (int i=0; i<SIZE; i++)
		cout << setw(W) << n1[i];
	cout << endl;
}

void	printArray2(int n2[])
{
		cout << " : Base address of Array \n"; 
		cout << (n2+0) << endl;
		cout << (n2+1) << endl;
		cout << (n2+2) << endl;
		cout << (n2+8) << endl;
		cout << (n2+9) << endl;
}

void	printArray3(int n3[])
{
	for(int i=0; i<SIZE; i++)
		cout << setw(W)<< *(n3+i) << endl;
}
