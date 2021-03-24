#include    <iostream>
#include    <cstdlib>
#include    <ctime>
#include    <iomanip>
using namespace std;

int     main()
{
    const   int N = 3;
    int     rdnum[N], min;
    
    srand(time(0));
    for(int i=0; i<N; i++) {
        rdnum[i] = rand() % 100;
        cout << "The random number " << i <<  "\t" << rdnum[i] << endl;
    }
    for(int i=0; i<N; i++){
        if ( (i==0) || (min > rdnum[i]) )
            min = rdnum[i];
    }
    cout << "The min value is \t" << min << endl;
    return 0;
}