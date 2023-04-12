// Overlaoding >, +, =
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
	Student(int id, string s, double *sc)
	{
		sid = id;
		sname = s;
		scores = new double[NUM_SCORES];
		for (int i = 0; i < NUM_SCORES; i++)
			scores[i] = sc[i];
	}
	Student(const Student &s)
	{
		this->sid = s.sid;
		this->sname = s.sname;
		this->scores = new double[NUM_SCORES];
		for (int i = 0; i < NUM_SCORES; i++)
			this->scores[i] = s.scores[i];
	}
	~Student()
	{
		delete[] scores;
	}
	int operator>(const Student &);
	double operator+(const Student &);
	Student operator=(const Student &);
	int getSid() const
	{
		return sid;
	}
	string getSname() const
	{
		return sname;
	}
	double *getScores() const
	{
		return scores;
	}
	void setSid(int i)
	{
		sid = i;
	}
	void setSname(string s)
	{
		sname = s;
	}
	void setScores(double *s)
	{
		for (int i = 0; i < NUM_SCORES; i++)
			scores[i] = s[i];
	}
};

int Student::operator>(const Student &r)
{
	double sum1 = 0.0, sum2 = 0.0;
	for (int i = 0; i < NUM_SCORES; i++)
	{
		sum1 += this->scores[i];
		sum2 += r.scores[i];
	}
	return sum1 > sum2;
}
double Student::operator+(const Student &r)
{
	double sum1 = 0, sum2 = 0;
	for (int i = 0; i < NUM_SCORES; i++)
	{
		sum1 += this->scores[i];
		sum2 += r.scores[i];
	}
	return sum1 + sum2;
}
Student Student::operator=(const Student &r)
{
	sid = r.sid;
	sname = r.sname;
	for (int i = 0; i < NUM_SCORES; i++)
		scores[i] = r.scores[i];
	return *this;
}

void printStudent(Student &s)
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
	double new_score1[NUM_SCORES] = {99.10, 98.72, 89.71};
	double new_score2[NUM_SCORES] = {0.0, 0.0, 0.0};

	Student s1(10001, "John", new_score1);
	Student s2(10002, "Bill", new_score2);

	if (s1 > s2)
	{
		cout << " s1 score's sum is greater than s2\n";
		printStudent(s1);
	}
	else
	{
		cout << " s2 score's sum is greater than s1\n";
		printStudent(s2);
	}

	cout << "The sum of two Students : " << fixed << setprecision(2) << s1 + s2 << endl;

	Student s3;

	s2 = s3 = s1;
	cout << "S2's Contents\n";
	printStudent(s2);
	cout << "S3's Contents\n";
	printStudent(s3);
}