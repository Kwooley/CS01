#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_SCORES = 3;
class Student
{
private:
	int sid;
	string sname;
	double *scores;

public:
	Student() : sid(0), sname()
	{
		scores = new double[NUM_SCORES];
	}
	Student(int i, string s, double *sc)
	{
		sid = i;
		sname = s;
		scores = new double[NUM_SCORES];
		for (int l = 0; l < NUM_SCORES; l++)
			scores[l] = sc[l];
	}
	~Student()
	{
		cout << "\t\t\tDestructor is working \t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << fixed << setprecision(2) << scores[i] << "\t";
		// delete[] scores;
		cout << endl;
	}
	int getSid() const { return sid; }
	string getSname() const { return sname; }
	double *getScores() const { return scores; }
	void setSid(int i) { sid = i; }
	void setSname(string s) { sname = s; }
	void setScores(double *s)
	{
		for (int i = 0; i < NUM_SCORES; i++)
			scores[i] = s[i];
	}
};
void printStudent(Student s)
{
	double *sc;
	cout << "ID: " << s.getSid() << "\t";
	cout << "Name: " << s.getSname() << "\t";
	sc = s.getScores();
	for (int i = 0; i < NUM_SCORES; i++)
		cout << fixed << setprecision(2) << sc[i] << "\t";
	cout << endl;
}
int main()
{
	double sc1[NUM_SCORES] = {99.10, 98.72, 89.71};
	Student s1(1001, "John", sc1);
	printStudent(s1);

	double sc2[NUM_SCORES] = {100.00, 99.99, 88.88};
	s1.setScores(sc2);
	printStudent(s1);

	Student s2(s1);
	printStudent(s2);
	double sc3[NUM_SCORES] = {0.0, 0.0, 0.0};
	s2.setScores(sc3);
	printStudent(s1);
}