#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int makeNameRecord(string[], string[], int[], string[], int[]);
void printoutallrecords(int, string[], string[], int[], string[], int[]);
void findNames(int, string[], string[], int[], string[], int[], char, string);
void printoutcontents(string, string, int, string, int);

const int N = 5000;
int main()
{
	string state[N];
	string gender[N];
	int year[N];
	string name[N];
	int count[N];
	int cnt;
	char starting;
	string stname;
	starting = 'S';
	stname = "CA";

	cnt = makeNameRecord(state, gender, year, name, count);
	printoutallrecords(cnt, state, gender, year, name, count);
	findNames(cnt, state, gender, year, name, count, starting, stname);
}
