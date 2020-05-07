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
        ifstream ifs;
        string readline, splitstr;
        int     commaposition, start;
        int     idx, fieldidx;

        ifs.open("allstate.txt");
        if (!ifs){
            cout << "File Open Error\n";
            eixt(0);
        }
        idx = 0;
        while (ifs >> readline) {
            fieldidx = 0;
            start = 0;
            while ( (commaposition = readline.find(',', start)) != string::npos ){
                splitstr = readline.substr(start, commaposition-start);
                switch (fieldidx) {
                    case 0: //* First Field
                        stname[idx] = splitstr;
                        break;
                    case 1:
                        gender[idx] = splitstr[0];
                        break;
                    case 2:
                        year[idx] = stoi(splitstr);
                        break;
                    case 3:
                        name[idx] = splitstr;
                        break;
                    default:
                        cout << "Field Error\n";
                        exit(0);
                }
                start = commaposition + 1;
                fieldidx += 1;
            }
            splitstr = readline.substr(start, readline.size()-start+1);
            cnt[idx] = stoi(splitstr);
            idx += 1;
        }
     
}
void    retrieveRecord(int useryear, string userstate)
{
  
}
void    printRecord(int idx)
{
        cout <<  stname[idx] << "\t\t" << gender[idx] << "\t" << year[idx] << "\t" << 
                setw(10) << name[idx] << "\t" << cnt[idx] << "\n" ;
}