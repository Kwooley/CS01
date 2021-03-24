// quiz 6. No. 5
//

// member function find() 
// str1.find(str2) : find the "str2" in "str1". if exists, return the position.

#include	<iostream>
using namespace std;

int main()
{
	string  languages="Python Java C++ Html Php R Ruby";
	string 	choice="C++";
	int		pos;

	if ( (pos = languages.find(choice)) > 0)
		cout << choice << " was found at " << pos << endl;
	
}
