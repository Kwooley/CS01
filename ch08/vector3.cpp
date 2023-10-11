#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void initVectors(vector<int> & , vector<string> &, int);
void printVectors(vector<int> , vector<string> , int);
void sortVectors(vector<int> &, vector<string> &, int);

int main()
{
    const int N=10;
    vector<int> IDs(N);
    vector<string> names(N);

    initVectors(IDs, names, N);
    printVectors(IDs, names, N);
    sortVectors(IDs, names, N);
    printVectors(IDs, names, N);

}

void initVectors(vector<int> &IDs, vector<string> &names, int N)
{
    ifstream ifs;
    
    ifs.open("vectordata.txt");

    if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
        ifs >> IDs[i] >> names[i] ;
        if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
    
}
void sortVectors(vector<int> &IDs, vector<string> &names, int N)
{
    int minval, minid;
    string tmp;
    for(int i=0; i<N; i++)
    {
        minval = IDs[i];
        minid = i;
        for(int j=i+1; j<N; j++)
        {
            if ( minval > IDs[j] )
            {
                minval = IDs[j];
                minid = j;
            }
        }
        IDs[minid] = IDs[i];
        IDs[i] = minval;

        tmp = names[minid];
        names[minid] = names[i];
        names[i] = tmp;
    }
}
void printVectors(vector<int> IDs, vector<string> names, int N)
{
    for(int i=0; i<N; i++)
        cout << IDs[i] << "\t" << names[i] << "\n";
    cout << endl;
}