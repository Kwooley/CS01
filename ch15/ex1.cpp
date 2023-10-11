#include <iostream>
using namespace std;

class Employee{

    string sname;
    string ssn;
    double netpay;
};

class HourlyEmployee : public Employee{
    double wagerate;
    double hours;
};

HourlyEmployee h1;
