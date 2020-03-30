
#include <iostream>
using namespace std;

int main()
{
    int     localmain=10;
    int     i;
    int     j;
    
    i = 10;
    j = 30;

    if ( 1 ){
        int localif=100;
        int i;
        i = 20;
        cout << "The value i " << i << endl;
        cout << "The value j of the main functin " << j << endl;

    }

    cout << "The value i " << i << endl;
    //* Can we access the variable "localif" in the if block? Why? 
}