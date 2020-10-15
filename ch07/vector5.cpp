//. The element insertion into the middle of vector.
//. We should use the "iterator".
//. This concept will be introduced more in Chapter 8.5 and 17.

// single element (1)
// 			iterator insert (iterator position, const value_type& val);

// fill (2)
//     		void insert (iterator position, size_type n, const value_type& val);

// range (3)
// 			template <class InputIterator>
// 		 	   void insert (iterator position, InputIterator first, InputIterator last);
/*
Parameters

position
    Position in the vector where the new elements are inserted.
    iterator is a member type, defined as a random access iterator type that points to elements.
val
    Value to be copied (or moved) to the inserted elements.
    Member type value_type is the type of the elements in the container, defined in deque as an alias of its first template parameter (T).
n
    Number of elements to insert. Each element is initialized to a copy of val.
    Member type size_type is an unsigned integral type.
first, last
    Iterators specifying a range of elements. Copies of the elements in the range [first,last) are inserted at position (in the same order).
    Notice that the range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
    The function template argument InputIterator shall be an input iterator type that points to elements of a type from which value_type objects can be constructed.
il
    An initializer_list object. Copies of these elements are inserted at position (in the same order).
    These objects are automatically constructed from initializer list declarators.
    Member type value_type is the type of the elements in the container, defined in vector as an alias of its first template parameter (T).

*/
/*
Return value
An iterator that points to the first of the newly inserted elements.
*/

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
        int insertnum = 50;
        int flag = 1;

        vector<int> number{55, 11, 22, 9, 88, 33, 77, 66, 44, 0};
        vector<int>::iterator iter;

        for (int val : number)
                cout << setw(5) << val;
        cout << endl;

        // Sort
        /*
	The range used is [first,last), 
	which contains all the elements 
	between first and last, including the element pointed by first 
	but not the element pointed by last.
*/
        sort(number.begin(), number.end());
        for (int val : number)
                cout << setw(5) << val;
        cout << " After sort " << endl;

        // Insert an element to the vector
        // Find the position and use the membership function insert()
        // end() : An iterator to the element past the end of the sequence.
        for (iter = number.begin(); iter != number.end(); iter++) {
                if (insertnum < *iter) {
                        number.insert(iter, insertnum);
                        flag = 0;
                        break;
                }
        }
        if (flag) {
                number.insert(number.end(), insertnum);
        }
        for (int val : number)
                cout << setw(5) << val;
        cout << endl;

        // std::find std::distance
        // Use the std::find function template and insert() membership function
        iter = find(number.begin(), number.end(), insertnum);
        int indexnumber = distance(number.begin(), iter);
        cout << "Insert position is : " << indexnumber << endl;
        number.insert(iter, insertnum);

        for (int val : number)
                cout << setw(5) << val;
        cout << endl;

        vector<int>::reverse_iterator rit;
        for (rit = number.rbegin(); rit != number.rend(); rit++)
                cout << setw(5) << *rit;
        cout << endl;
}
