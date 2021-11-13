#include <iostream>
using namespace std;

class Animal
{
public:
    // const:
    Animal() { cout << "Animal Constructor\n"; }
    virtual ~Animal() { cout << "Animal Destructor\n"; }
};
class Dog : public Animal
{
public:
    Dog() { cout << "Dog Constructor\n"; }
    ~Dog() { cout << "Dog Destructor\n"; }
};

int main()
{
    Dog d;
    Animal *apointer = new Dog();
    delete apointer;
}