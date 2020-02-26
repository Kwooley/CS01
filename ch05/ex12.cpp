#include        <iostream>
using   namespace       std;

//* Find the min or max among the user input 5

int main()
{
        int i=0, min, max, usernum;

        min = 0;
        while(i++<5) {
                cout << "Enter your input\n";
                cin >> usernum;
                if ( min > usernum)
                        min = usernum;
        }
        cout << " Min " << min << endl;
}