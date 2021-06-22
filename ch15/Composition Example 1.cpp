#include <iostream>
using namespace std;

class Employee 
{
	private:
		string sname;
		string 	ssn;
		double 	netPay;
	public:
		Employee(){};
		Employee(const string &name, const string &essn) : sname(name), ssn(essn){};
		string getName() const { return sname; };
		string getSSN() const { return ssn; };
		double getNetpay() const { return netPay; };
		void setName(const string &name) { sname = name; };
		void setSSN(const string &essn) { ssn = essn; };
		void setNetPay(double newPay) { netPay = newPay; };
		void printCheck() const {};
};

class HourlyEmployee
{
	private:
		double wageRate;
		double hours;
		Employee E;
	public:
		HourlyEmployee(): wageRate(0), hours(0){};
		HourlyEmployee(const string &name, const string &ssn, const double w, const double h)
		{
			E.setName(name);
			E.setSSN(ssn);
			wageRate = w;
			hours = h;
		}
		void setRate(const double r) { wageRate = r; };
		void setHours(const double h) { hours = h; };
		double getRate() { return wageRate; };
		double getHours() { return hours; };
		string getName(){ return E.getName(); };
		string getSSN(){ return E.getSSN(); };
		void printCheck() {
			E.setNetPay(wageRate * hours);
			cout << "Pay to order of " << E.getSSN() << ", " << E.getName() << endl;
			cout << "Total amount " << E.getNetpay() << endl;
        }
};

int main()
{
	HourlyEmployee h1("Doe", "101", 50, 10);

        cout << h1.getName() << endl;
        cout << h1.getSSN() << endl;
	h1.printCheck();

}