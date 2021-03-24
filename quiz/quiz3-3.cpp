#include    <iostream>
using namespace  std;

int     main()
{
    int     begin, end, flag;

    do{
        cout << "Enter user range [2..100]";
        cin >> begin >> end;
    } while( (begin < 2) || ( end > 100) || (begin > end));

    for(int i=begin; i<end; i++) {
        flag = 0;
        for(int j=2; j<=(i/j); j++) {
            if ( i % j == 0) {
                flag = 1;
                break; 
            }
        }
        if (flag)
            cout << "\t\tThe number " << i << " is not a prime number\n";
        else
            cout << "The number " << i << " is a prime number\n";
    }
}