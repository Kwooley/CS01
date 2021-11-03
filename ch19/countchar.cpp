#include <iostream>
using namespace std;

int countChar(string, char);

int main()
{
	string name = "aaabbccccddee";
	int cnt;
	char search = 'b';

	if (name.length() > 0)
		cnt = countChar(name, search);
	cout << "The number of count is : " << cnt << endl;
}

int countChar(string s, char search)
{
	if (s.length() == 0)
		return 0;
	else
	{
		if (s[0] == search)
			return 1 + countChar(s.substr(1), search);
		else
			return countChar(s.substr(1), search);
	}
}