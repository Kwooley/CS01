#include <iostream>

using namespace std;

int main()
{
	//* Declare Section
	const double TAX = 0.0675;
	const double TIP = 0.2;
	double taxAmount,
	    	tipAmount,
	    	totalBill;

	double mealCharge = 88.67;

	//? Calcualation total Bill
	taxAmount = mealCharge * TAX;
	tipAmount = (mealCharge + taxAmount) * TIP;

	totalBill = mealCharge + taxAmount + tipAmount;

	//? Display the results
	cout << "Tax Amount " << taxAmount << endl;
	cout << "Tip amount " << tipAmount << endl;
	cout << "Total Bill is " << totalBill << endl;
}