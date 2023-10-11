// 		Lab 5-8.  Problem Definition
//
//		Write a program that finds the sequence of power of 2 in the given range.

//		Program Requirements
//		1)  One user input for the end of range. The starting range is fixed at 0.
//		2)  Range must be in  [0 - 1300].
//		3)  Print out "Not found" message if there is no power 2 in the given range.
//		4)  Use the for-loop and <cmath> pow function.
//			if you solve it, try again to use do-while or while-loop without pow() function.

#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
        int i;
        int begin, end;

        //* Input Validation
        do
        {
                cout << "Enter the range. [0..1300]  \n";
                cin >> begin >> end;
        } while ((begin < 0) || (end > 1300) || (begin > end));

        for (i = 0; pow(2, i) < end; i++)
        {
                if (pow(2, i) > begin)
                        cout << "The power number of 2 to " << i << " is " << pow(2, i) << endl;
        }
}
