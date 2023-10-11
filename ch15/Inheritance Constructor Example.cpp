#include    <iostream>
using namespace std;

class rectangle {
    public:
        rectangle() {
            cout << "Base class rectangle Constructor is called\n";
        }
        ~rectangle(){
            cout << "Base class rectangle Destructor is calld\n";
        }
};

class cube : public rectangle {
    public:
        cube() : rectangle() {
            cout << "Derived class cube constructor is called\n";
        }
        ~cube() {
            cout << "Derived class cude destructor is called\n";
        }
};

int main()
{
    cube c;
}