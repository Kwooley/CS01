// Chapter 10. Characters, C-Strings, and More about the Strings
// Example.cpp
#include	<iostream>
using namespace std;

int main()
{
  	
  	string str1="BDSDSDCDFDF";

  	string::iterator it;
  	int		seen[26]={0};
  	int		index, cnt=0;

  	for(it=str1.begin(); it<str1.end(); it++)
  	{
  		index = *it - 'A';
  		if ( seen[index] == 0) {
  			seen[index] = 1;
  			cnt++;
  		}
  	}
  	cout << " The unique characters are " << cnt << endl;
}
