
#include <iostream>
using namespace std;

class base
{
public:
    // void print()
    void virtual print()
    {
        cout << "Base Class print function\n";
    }
};
class derived : public base
{
public:
    // void virtual print()
    void print()
    {
        cout << "Derived Class print function\n";
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
}