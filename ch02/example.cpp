#include	<iostream>

using namespace std;

int main()
{
	double	tax = 0.0675;
	double	tip = 0.2;
	double	taxAmount,
		tipAmount,
		totalBill;

	// git stage changed
	double 	mealCharge = 88.67;
	
	taxAmount = mealCharge * tax;
	tipAmount = (mealCharge + taxAmount) * 0.2;

	totalBill = mealCharge + taxAmount + tipAmount;

	cout << "Tax amount " << taxAmount << endl;
	cout << "Tip amount " << tipAmount << endl;
	cout << "Total Bill is " << totalBill << endl;

} 