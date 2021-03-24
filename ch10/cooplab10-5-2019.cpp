// Cooperative Programming Lab 10-5-1
// The Class string and it's member functions.

#include	<iostream>
#include	<string>
using namespace std;

int	findpattern(string, string);
int	findnumchars(string);

int	main()
{
	string	txt("BACDGABCDAZ");
	string 	pat("ABCD");
	int		result;

	cout << "Text : " << txt << endl;
	cout << "Pattern : " << pat << endl;

	result = findpattern(txt, pat);
	result = findnumchars(txt);
}

int	findpattern(string txt, string pat)
{
	int	findstartpos,ret;
	string::iterator	it;


	for(it=txt.begin();it<txt.end(); it++){
		findstartpos = distance(txt.begin(), it);
		ret = txt.compare(findstartpos, pat.length(), pat);
		if ( ret == 0) 
			cout << "Found at : " << findstartpos << endl;	
	}
	return ret;
}
int	findnumchars(string txt)
{
	int	uniquecnt=0, index;
	int	seen[26]= {0};
	string::iterator iter;

	for(iter=txt.begin(); iter<txt.end(); iter++) {
		index = *iter- 'A';
		if (seen[index] == 0 ){
			seen[index] = 1;
			uniquecnt++;
		}
	}
	cout << "The number of unique characters : " << uniquecnt << endl;
	for(int i=0; i<27;i++){
		if ( seen[i] == 1)
			cout << static_cast<char>(i+'A');
	}
	cout << endl;
	return uniquecnt;
}





