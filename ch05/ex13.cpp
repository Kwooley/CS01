#include        <iostream>
using   namespace       std;

//* 5 user integer numbers
//* Check these numbers are coming with increasing order

int main()
{

        int     i=0,  usernum, previous;

        while( i < 5) {
                cout << "User input\n";
                cin >> usernum;
                if ( i > 0)
                {
                        if( previous > usernum) 
                        cout << "Not increasing order\n";
                }
                previous = usernum;
                i++;
        }

}