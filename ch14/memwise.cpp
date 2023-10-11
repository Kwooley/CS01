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
	void setName(const char *n)
	{
		strcpy(name, n);
	}
	void deletePtr()
	{
		delete[] name;
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

	Student s3(s1);
	cout << "S3's name : " << s3.getName() << endl;

	s3.setName("Kurt");
	cout << "S1's name : " << s1.getName() << endl;
}