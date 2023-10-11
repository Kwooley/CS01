#include <iostream>

using namespace std;

class Node
{
private:
	int value;
	int *ptr;

public:
	Node();
	~Node();
	int getPtrvalue(void) const;
};
Node::Node()
{
	value = 100;
	ptr = new int;
	*ptr = value + 20;
}
Node::~Node()
{
	cout << "Destructor Called \n";
	delete ptr;
}
int Node::getPtrvalue() const
{
	return *ptr;
}

int main()
{
	Node n1;
	cout << "The ptr value " << n1.getPtrvalue() << endl;
}