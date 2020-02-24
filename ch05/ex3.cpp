#include        <iostream>
#include        <cstdlib>
#include        <ctime>

using   namespace       std;

int main()
{
        //* Input : two integers [from .. end]
        //* Requirements for the input
        //?    [0..100]   > 0 , < 100
        //?    from < end
        //* Print out all even numbers 
        //*             in the given user range
        int     from, end, i;
        cout << "Enter the range\n";
        cin   >> from >> end;
        while ( (from < 0) || (end >100) || (from >=end))
        {
                cout << "Enter the range\n";
                cin   >> from >> end;
        }
        i = from; 
        while ( i < end)
        {
               if ( !(i % 2) )  
                        cout << i << endl;
                i++;
        }

}