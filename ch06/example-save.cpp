#include    <iostream>
using namespace std;

int main()
{
    int localinmain;

    int i;
    i = 10;

    localinmain = 100;
    if ( 1 ) {
        int     i;
        i = 20;
        int localinifstmt = 200;
        cout << localinifstmt << endl;
        cout << i ; //* Value will be 20; The local var. in if block.
    }

    cout << i << endl; //* Value will be 10. The local var. in Main.

    // cout << localinfistmt << endl; //* Error !! We cannot access the local var. in other block.

     

}