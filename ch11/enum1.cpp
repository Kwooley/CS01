#include        <iostream>
using namespace std;

int main()
{
      enum  day { MON, TUE, WED, THU, FRI, SAT, SUN};

      day workday;      //* Enum data type declaration.

      int number[7];
      for(int i=MON; i<=SUN; i++){
          number[i] = i;                //* number[0] = 0, number[1] = 1; number[2]=2; and so on
      }
      for(int i=MON; i<=SUN; i++){
          cout << number[i] ;                //* number[0] = 0, number[1] = 1; number[2]=2; and so on
      }

      workday = MON;
      cout << number[workday] << endl;      //*  number[0], 0

      for(workday=MON; workday<=SUN; workday++)     //* ERROR. Enum variable cannot increseae 1
            cout << number[workday] << endl; 

      // workday = 2 ;             //* Error : Cannot assign integer value directly.
}