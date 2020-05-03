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
        ifstream    ifs;
        string      readline, splitstr;
        int         idx=0, fieldidx, start, commaposition;
        ifs.open("allstate.txt");
        if (!ifs) {
            cout << "Fine Open Error\n";
            exit(0);
        }
        while ( ifs >> readline){
            start = 0; 
            fieldidx = 0;
            while ( (commaposition = readline.find(',', start)) != string::npos){
                splitstr = readline.substr(start, commaposition-start);
                start = commaposition + 1;
                switch (fieldidx) {
                    case 0:
                        stname[idx] = splitstr;
                        break;
                    case 1:
                        gender[idx] = splitstr[0]; //* Becuase the gender[i] is char
                        break;
                    case 2:
                        year[idx] = stoi(splitstr);
                        break;
                    case 3:
                        name[idx] = splitstr;
                        break;
                    default:
                        cout << "Field Index Error\n";
                        exit(0);
                }
                fieldidx += 1;
            }
            splitstr = readline.substr(start, readline.size()-start+1);
            cnt[idx] = stoi(splitstr);
            idx += 1;
        }
        return idx;
}
void    retrieveRecord(int useryear, string userstate)
{
        for(int i=0; i<Numrecord; i++){
            if ( year[i] == useryear && stname[i] == userstate)
                    printRecord(i);
        }
}
void    printRecord(int idx)
{
        cout <<  stname[idx] << "\t\t" << gender[idx] << "\t" << year[idx] << "\t" << 
                setw(10) << name[idx] << "\t" << cnt[idx] << "\n" ;
}