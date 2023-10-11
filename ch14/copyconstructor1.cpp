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

int main()
{
	double sc1[NUM_SCORES] = {99.10, 98.72, 89.71};
	Student s1(1001, "John", sc1);

	Student s2(s1);
	double *sc = s2.getScores();
	cout << "S2's scores\n";
	for (int i = 0; i < NUM_SCORES; i++)
		cout << fixed << setprecision(2) << sc[i] << "\t";
	cout << endl;

	double sc2[NUM_SCORES] = {0.0, 0.0, 0.0};
	s2.setScores(sc2);
	sc = s1.getScores();

	cout << "After updating the s2's score, S1's scores\n";
	for (int i = 0; i < NUM_SCORES; i++)
		cout << fixed << setprecision(2) << sc[i] << "\t";
	cout << endl;
}