#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

Students *makeStudents(int );
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
    const int N=10;
    Students *ptr=nullptr;
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    printStudents(ptr, N);
}

Students *makeStudents(int N)
{
    ifstream ifs;
    Students    *ptr= new Students [N];

    ifs.open("students.txt");
    if ( ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }
    for(int i=0;i<N; i++)
    {
        ifs >> (ptr+i)->sid >> (ptr+i)->sname;
        for(int j=0; j<NUM_SCORES; j++)
			ifs >> (ptr+i)->scores[j] ;
		if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
    return ptr;
}

void printStudents(Students * const ptr, int N)
{
    for(int i=0;i<N;i++)
	{
		cout << (ptr+i)->sid << "\t" << (ptr+i)->sname << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  (ptr+i)->scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}

void sortStudents(Students * const ptr, int N)
{
    for(int i=0; i < N-1; i++)
	{
		for(int j=0; j<N-i-1; j++)
		{
            int sum_j=0, sum_j1=0;
            for(int k=0;k<NUM_SCORES; k++)
            {
                sum_j += (ptr+j)->scores[k];
                sum_j1 += (ptr+j+1)->scores[k];
            }
			if ( sum_j > sum_j1 )
				swap(*(ptr+j), *(ptr+j+1));
		}
	}
}

