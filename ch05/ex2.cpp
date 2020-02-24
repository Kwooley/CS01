#include        <iostream>
#include        <cstdlib>
#include        <ctime>

using   namespace       std;

int main()
{
        //* Power numbers to 2

        //* 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024

        int i, powernum;

        i = 0; powernum = 1;
        while( i++ < 10)
        {
                powernum = powernum * 2;
                cout << "Power number to 2 " << i  
                        << " is " << powernum << endl;
        }
}