#include        <iostream>
#include        <cstdlib>
#include        <ctime>

using   namespace       std;

int main()
{

        //* Random Numbers with iteration
        //* Range [1..65]
        int     i, rdnum; // lcv
        i = 0;
        srand(time(0));
        while ( i++ < 6)
        {
                rdnum = (rand() % 65) + 1;
                cout << " The random number " 
                        << rdnum << endl;
        }
     
}