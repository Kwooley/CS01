#include    <iostream>
#include    <cstdlib>
#include    <ctime>
#include    <vector>
#include    <algorithm>
#include    <iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
    vector<int> number;
    int     size = 10;
    srand(time(0));
    makevector(number, size);
    printvector(number);
    deleteone(number);
}
void makevector(vector<int> &vec, int size)
{
    for(int i=0; i<size; i++)
        vec.push_back(rand() % 5);
}
void printvector(vector<int> vec)
{
    for(int v : vec)
        cout << v << "\t";
    cout << endl;
}
void deleteone(vector<int> &vec)
{
    int     usernum, deletecnt=0;
    vector<int>::iterator it;
    cout << "Enter the one integer value\n";
    cin >> usernum;

    while( (it = find(vec.begin(), vec.end(), usernum) ) != vec.end()){
        if ( it != vec.end()){
            cout << *it << " is deleting\n";
            vec.erase(it);
            deletecnt += 1;
        }
    }
    cout << usernum << "is deleted " << deletecnt << " times \n";
    printvector(vec);
}