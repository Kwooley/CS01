#include "DOB.hpp"
#include "Course.hpp"
#include "Student.hpp"

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int N = 5;
	Student s[N];
	ifstream ifs;

	ifs.open("studentcourses.txt");
	if (ifs.fail())
	{
		cerr << "File open error\n";
		exit(0);
	}

	for (int i = 0; i < Student::getNumStudents(); i++)
	{
		ifs >> s[i];
		cout << s[i] << endl;
	}
}