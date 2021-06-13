#include <iostream>
using namespace std;

class Employee {
       private:
        string sname;
        string ssn;
        double netPay;

       public:
        Employee(){};
        Employee(const string &name, const string &essn) : sname(name), ssn(essn){};
        string getName() const { return sname; };
        string getSSN() const { return ssn; };
        double getNetpay() const { return netPay; };
        void setName(const string &name) { sname = name; };
        void setSSN(const string &essn) { sname = essn; };
        void setNetPay(double newPay) { netPay = newPay; };
        void printCheck() const {};
};

class HourlyEmployee : public Employee {
       private:
        double wageRate;
        double hours;

       public:
        HourlyEmployee();
        HourlyEmployee(const string &name, const string &ssn, const double w, const double h) : Employee(name, ssn), wageRate(w), hours(h){};
        void setRate(const double r) { wageRate = r; };
        void setHours(const double h) { hours = h; };
        double getRate() { return wageRate; };
        double getHours() { return hours; };
        void printCheck() {
                setNetPay(wageRate * hours);
                cout << "Pay to order of " << getSSN() << ", " << getName() << endl;
                cout << "Total amount " << getNetpay() << endl;
        }
};

class SalariedEmployee : public Employee {
       private:
        double salary;

       public:
        SalariedEmployee();
        SalariedEmployee(const string &name, const string &essn, const double s) : Employee(name, essn), salary(s){};
        void setSalary(const double s) { salary = s; };
        double getSalary() { return salary; };
        void printCheck() {
                setNetPay(salary);
                cout << "Pay to order of " << getSSN() << ", " << getName() << endl;
                cout << "Total amount " << getNetpay() << endl;
        }
};

int main() {
        SalariedEmployee s("John", "001", 100);
        HourlyEmployee h("Doe", "101", 50, 10);

        HourlyEmployee h1;

        h1.getName();

        s.printCheck();
        h.printCheck();
}