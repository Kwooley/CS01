#include	<iostream>

using namespace std;

int main()
{
	const double	TAX = 0.0675;
	const double	TIP = 0.2;
	double	taxAmount,
		tipAmount,
		totalBill;

	// git stage changed
	double 	mealCharge = 88.67;
	
	taxAmount = mealCharge * TAX;
	tipAmount = (mealCharge + taxAmount) * TIP;

	totalBill = mealCharge + taxAmount + tipAmount;

	cout << "Tax amount " << taxAmount << endl;
	cout << "Tip amount " << tipAmount << endl;
	cout << "Total Bill is " << totalBill << endl;

} 