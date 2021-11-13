#include <iostream>
using namespace std;

class BaseClass
{
protected:
	int value1;
	int value2;

public:
	BaseClass(int v1, int v2) : value1(v1), value2(v2) {}
	virtual void printSomething() const = 0;
};

class DerivedClass : public BaseClass
{
public:
	DerivedClass(int v1, int v2) : BaseClass(v1, v2) {}
	virtual void printSomething() const override
	{
		cout << "Overriden Pure Virtual Function\n";
		cout << " Value 1 " << value1 << " Value 2 " << value2 << endl;
	}
};

int main()
{
	// BaseClass bc; // Error. Cannot be instantiated.

	DerivedClass dc(10, 20);
	dc.printSomething();
}