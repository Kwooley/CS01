#include    <iostream>
#include    <fstream>
using namespace std;

const   unsigned short MAX=5000;
string  stname[MAX];
char    gender[MAX];
int     year[MAX];
string  name[MAX];
int     cnt[MAX];
int     Numrecord;

int     constructRecord(void);
void    retrieveRecord(int, string);
void    printRecord(int);
int main()
{
        int     year;
        string state;

        Numrecord = constructRecord();
        for(int i=0;i<Numrecord; i++)
            printRecord(i);

        cout << "Enter the year: (2011-2018)";
        cin >> year;
        cout << "Enter the stname (2 upper case letters): ";
        cin >> state;
        retrieveRecord(year, state);
}
int     constructRecord()
{
     
}
void    retrieveRecord(int useryear, string userstate)
{
  
}
void    printRecord(int idx)
{
        cout <<  stname[idx] << "\t\t" << gender[idx] << "\t" << year[idx] << "\t" << 
                setw(10) << name[idx] << "\t" << cnt[idx] << "\n" ;
}