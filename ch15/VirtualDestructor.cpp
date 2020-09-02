#include <iostream>
using namespace std;

class Anim{
    public:
        // const:
        Anim() { cout << "Anim Constructor\n";}
        virtual ~Anim() { cout << "Amin Destructor\n";}
} ;
class Dog : public Anim{
    public:
    Dog() { cout << "Dog Constructor\n";}
    ~Dog() { cout << "Dog Destructor\n";}
};

int main(){
    Dog d;
    Anim *anim = new Dog();
    delete anim;
}