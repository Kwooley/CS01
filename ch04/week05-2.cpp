#include        <iostream>
#include        <cstdlib>
#include        <ctime>
#include        <iomanip>
using namespace std;

int main()
{

        //* program that check the (x,y) has n_th quadrant
        int     x, y;
        int     q;
        cout << "Enter the your (x,y) \n";
        cin >> x >> y;
       
        if (( x > 0) && (y>0)) 
                q = 1;
        else if (( x < 0) && (y>0)) 
                q = 2 ;
        else if (( x < 0) && (y<0)) 
                q = 3 ;
        else    
                q = 4;

        if (x>0)
                if ( y > 0)
                        q = 1;
                else
                        q = 4;
        else
                if (y > 0)
                        q = 2;
                else
                        q = 3;

        cout << x << "," << y << " is in " << q <<"th quadrant\n";

}


