#include <iostream>
#include <memory>

using namespace std;

class Node
{
private:
	int value;
	// unique_ptr<int> ptr = unique_ptr<int>(new int);
	unique_ptr<int> ptr;

public:
	Node();
	~Node();
	int getPtrvalue(void) const;
};
Node::Node()
{
	value = 100;
	ptr = unique_ptr<int>(new int);
	*ptr = value + 20;
}
Node::~Node()
{
	cout << "Destructor Called \n";
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