
#include    <iostream>
using namespace std;

class base {
    public :
        virtual void print() {
            cout << "Base Class print function\n";
        }
};
class derived : public base {
    public :
        void print() {
            cout << "Derived Class print function\n";
        }
};

int main()
{
    base        *baseptr;
    derived     d;
    baseptr = &d;
    baseptr->print();
}