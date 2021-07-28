#include <iostream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[20];
	double 	scores[3];
};

void bubbleSort(Students [], int );
void makeStudents(Students [], int );
void printStudents(Students [], int );

int main()
{
	const int 	N = 10;
	Students 	s[N];

	makeStudents(s, N);
	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
	bubbleSort(s, N);
	cout << "After Sorting \n";
	printStudents(s, N);
}

void bubbleSort(Students s[], int N)
{
	int min, index;
	for(int i=0; i < N-1; i++)
	{
		for(int j=0; j<N-i-1; j++)
		{
			if ( s[j].sid > s[j+1].sid)
				swap(s[j], s[j+1]);
		}
		cout << "Bubble Sort Stage " << i << endl;
		printStudents(s, N);	
	}
}

void makeStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << "Enter the student's ID(integer) " ;
		cin >> s[i].sid;
		cout << "Enter the student's Name ";
		cin >> s[i].sname;
		cout << "Enter the student's 3 Scores ";
		for(int j=0; j<NUM_SCORES; j++)
			cin >> s[i].scores[j] ;
	}
}

void printStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].sid << "\t" << s[i].sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}