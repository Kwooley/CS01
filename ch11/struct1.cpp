// Chapter 11. Structured Data.
// 
// Struct1.cpp

#include	<iostream>
using namespace	std;

struct student
{
	int	id;
	string	name;
	string	address;
};


int	main()
{
	student	s1;
	student 	s2 = {10001, "Mary", "Lafayette"};

	cout << "Enter the student's information (id, name, address)\n";
	cin >> s1.id >> s1.name >> s1.address ;
	cout << "Student Info S1\n" << s1. id << "\t" << s1.name << "\t" << s1.address << endl;
	
	cout << "Student Info S2\n" << s2. id << "\t" << s2.name << "\t" << s2.address << endl;
}