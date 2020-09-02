#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
 
using namespace std;
 
const unsigned short N = 5;
struct Scores
{
   double sc[N];
   string grade;
};
struct Grade
{
   string first;
   string last;
   string ssn;
   Scores score;
};
int main()
{
   Scores score;
   stringstream ss;
   Grade g;
   ifstream ifs;
   string field, buf;
   int i = 0, fcnt = 0;
   ifs.open("grades.txt", ios::in | ios::binary);
   if (!ifs)
   {
       cout << "Error opening file.\n";
       exit(0);
   }
   while ((i < 17) && (getline(ifs, buf, '\n')))
   {
       std::cout << "field " << buf << std::endl;
       ss << buf;
       while (getline(ss, field, ','))
       {
           switch (fcnt)
           {
           case 0:
               g.last = field;
               break;
           case 1:
               g.first = field;
               break;
           case 2:
               g.ssn = stoi(field);
               break;
           case 3:
               score.sc[0] = stoi(field);
               break;
           case 4:
               score.sc[1] = stoi(field);
               break;
           case 5:
               score.sc[2] = stoi(field);
               break;
           case 6:
               score.sc[3] = stoi(field);
               break;
           case 7:
               score.sc[4] = stoi(field);
               break;
           }
           fcnt = ++fcnt % 5;
       }
       i++;
       ss.clear();
   }
}
 

