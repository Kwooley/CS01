#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

const unsigned short N=5;

struct Scores{     
  double sc[N];     
  string grade;
};

struct Grade{    
  string first;    
  string last;   
  string ssn;   
  Scores score;
};

//void makeArray(Grade);

int main()
{
  Grade g;
  int i = 0;
  //makeArray(g);
  stringstream ss;
  string buff, str;
  ifstream ifs;
  ofstream ofs;

  ifs.open("grades.txt");
  if(!ifs)
  {
    cout << "Open Error";
    exit (0);
  }  
  
  ofs.open("grades.bin", ios :: binary);
  if (!ofs)
  {
    cout << "Open Error";
    exit(0);
  }

  while (ifs >> buff) 
  {
    ss << buff;
    while (getline(ss, str, ',')) 
    {
      if (i == 0)
      {
        g.first = str;
        ofs.write((char *)&g.first, sizeof(g.first));
        cout << "first: " << g.first << endl;
      }
      if (i == 1) //only taking in last right now
      {
        g.last = str;
        ofs.write((char *)&g.last, sizeof(g.last));
        cout << "last" << g.last << endl;
      }
      if (i == 2)
      {
        g.ssn = str;
        ofs.write((char *)&g.ssn, sizeof(g.ssn));
        cout << "ssn" << g.ssn << endl;
      }
      if (i >= 3 && i <=(N+2)) //should be 2 not 3!!
      {
        g.score.sc[i]= stod(str); //stod means String TO Double
        ofs.write((char *)&g.score.sc[i], sizeof(g.score.sc[i]));
        cout << "score" << i << ": " << g.score.sc[i] << endl;
      }
      if (i == (N+3))
      {
        getline(ss, str, '\n'); //there is no comma after the grade so this needs to be outside of the while loop
        cout << "start of grade" << endl;

        g.score.grade.assign(str);
        // g.score.grade = str; //this is where my error is coming from

        cout << "grade assigned to str" << endl;
        ofs.write((char *)&g.score.grade, sizeof(g.score.grade));
        cout << "grade written in file" << endl;
        cout << "grade: " << g.score.grade << endl;
        break;
      }
      i++;
    }
  }
}


