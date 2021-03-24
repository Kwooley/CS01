//* [Ex2] Make the program that find the largest number among three random numbers.
//* - The random numbers must be in [0..99]

#include        <iostream>
#include        <cstdlib>
#include        <ctime>
#include        <iomanip>
using namespace std;
int     main()
{
        int             rdnum1, rdnum2, rdnum3;
        int             maxnum;

        srand(time(0));
        rdnum1 = rand() % 100;
        rdnum2 = rand() % 100;
        rdnum3 = rand() % 100;
        cout << "Random numbers are " << setw(5) << rdnum1 
                                        << setw(5) << rdnum2
                                        << setw(5) << rdnum3 << endl;
        if (rdnum1 < rdnum2)
                if ( rdnum2 < rdnum3)
                        maxnum = rdnum3;
                else
                        maxnum = rdnum2;
        else
                if (rdnum1 < rdnum3)
                        maxnum = rdnum3;
                else
                        maxnum = rdnum1;
        cout << "The max number is " << maxnum << endl;
}