#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("allstates.txt");

    if ( ifs.fail() )
        cout << "File Open Error\n";
    if ( ifs.good() )
        cout << "File status is good\n";
    if ( ifs.eof() )
        cout << "The EOF is reached \n";
    if ( ifs.bad() )
        cout << "Read and Write Error on I/O\n";

}