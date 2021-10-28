#include "numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	Numbers n(15);

	srand(time(0));
	n.setElement();
	n.printNumbers(0);
	n.clear();

	n = Numbers(10);
	n.setElement();
	n.setElement(-100, 0);
	n.setElement(400, 4);
	n.setElement(900, 9);

	for (int i = 0; i < n.getSize(); i++)
		cout << n.getElement(i) << "\t";
	cout << endl;

	n.bubbleSort(0);
	n.printNumbers(0);
	for (int i = 0; i < n.getSize(); i++)
		cout << n.getElement(i) << "\t";
	cout << endl;
	cout << "Sum of numbers : " << n.getSum() << endl;
	cout << "Avg of numbers : " << n.getAvg() << endl;
}