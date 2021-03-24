// Cooperative Programming Lab 10-5-1
// The Class string and it's member functions.

#include	<iostream>
#include	<string>
using namespace std;

int	splitwords(string, char);
int	findnumchars(string);

int	main()
{
	string	txt1("ABCDEF,GHI,JKLMN,OP");
	string 	txt2("BACDGABCDAZ");
	int		result;
	char	delimiter=',';

	result = splitwords(txt1, delimiter);
	result = findnumchars(txt2);
}

int	splitwords(string txt, char delimiter)
{
	int		found, start, cnt = 0;
	string 	split ;
	start = 0 ;
	while ((found = txt.find(delimiter, start)) != string::npos) {
		split = txt.substr(start, found-start);
		cout << " Split word " << split << endl;
		start = found + 1;
		cnt += 1;
	}
	split = txt.substr(start, txt.length()-start);
		cout << " Split word " << split << endl;
	return cnt+1;
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





