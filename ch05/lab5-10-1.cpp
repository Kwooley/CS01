#include        <iostream>
#include        <iomanip>
#include        <cmath>
using   namespace       std;

int main()
{
    int i=0, sum=0, limit;

    cout << "Enter your input\n";
    cin >> limit;
    cout << "Your Limit is " << limit << endl;

    for(i=0; sum < limit; i++){
        sum += i;
        cout << "i " << i << " sum " << sum << endl;
    }
    sum -= i-1;
    cout << " The sum from 0 to " << i-2 << " is "  << sum << endl;  


}