#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     ifstream  ifs;
     // char      str[256];
     string    str;                //* In this example, we will use "std::getline". Thus "string" var is required.

     ifs.open("cany.txt", ios::in);
                                             //* CA,F,1910,Mary,295
                                             //* CA,F,1910,Helen,239
                                             //* CA,F,1910,Dorothy,220
     if (!ifs){
          cout << "File Open Error\n";
          exit(0);
     }

     getline(ifs, str, ',');
     cout << str << endl;               //* CA
     getline(ifs, str, ',');
     cout << str << endl;               //* F
     getline(ifs, str, ',');
     cout << str << endl;               //* 1910 as string val.
     getline(ifs, str, ',');
     cout << str << endl;               //* Mary
     getline(ifs, str, ',');
     cout << str << endl;               //* 295 ? At this time, the next comma is in the next line. 
                                        //* Thus, 295 CA are read together.
     

     // ifs.getline(str, 256, ',');             //* get the first field 'CA'
     // cout << str << endl; 
     // ifs.getline(str, 256, ',');             //* get the second field 'F'
     // cout << str << endl; 

}