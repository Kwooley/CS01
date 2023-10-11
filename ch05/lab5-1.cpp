//* [Lab5-1]

#include        <iostream>
using namespace         std;

int     main()
{
        int     lcv=33;

        while( lcv <= 127 )
        {
                if (!(lcv % 16 ))
                        cout << endl;
                cout << '[' << lcv << ',' << static_cast<char>(lcv) << "] " ;
                lcv += 1;
        }

}