#include <iostream>
using namespace std;

class Student
{
private:
	int id;
	char *name;

public:
	Student()
	{
		id = 0;
		name = new char[20];
	}
	int getID() const { return id; }
	char *getName() const { return name; }
	void setID(int i) { id = i; }
	void setName(char *n)
	{
		strcpy(name, n);
	}
};

int main()
{
	Student s1, s2;
	s1.setID(10);
	s1.setName("John");

	s2 = s1;
	cout << " S2's name : " << s2.getName() << endl;

	s2.setName("Bill");
	cout << "S1's name : " << s1.getName() << endl;
}