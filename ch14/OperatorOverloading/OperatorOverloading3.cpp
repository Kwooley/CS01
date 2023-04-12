// Overlaoding <<
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
	Student operator+(const Student &);
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

	friend ostream &operator<<(ostream &, const Student &);
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

Student Student::operator=(const Student &r)
{
	sid = r.sid;
	sname = r.sname;
	for (int i = 0; i < NUM_SCORES; i++)
		scores[i] = r.scores[i];
	return *this;
}

Student Student::operator+(const Student &r)
{
	Student temp;
	temp.sid = this->sid;
	temp.sname = this->sname;
	for (int i = 0; i < NUM_SCORES; i++)
		temp.scores[i] += this->scores[i] + r.scores[i];
	return temp;
}

ostream &operator<<(ostream &ofs, const Student &s)
{
	cout << "Student Information \n";
	cout << s.sid << "\t";
	cout << s.sname << "\t";
	for (int i = 0; i < NUM_SCORES; i++)
		cout << fixed << setprecision(2) << s.scores[i] << "\t";
	cout << endl;
	return ofs;
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
	double new_score2[NUM_SCORES] = {50.0, 50.0, 50.0};

	Student s1(10001, "John", new_score1);
	Student s2(10002, "Bill", new_score2);

	Student s3;
	s3 = s2 + s1;
	cout << "S3's Contents\n";
	printStudent(s3);

	cout << s1 << s2;
}