#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char 	userstr[100];
	int 	cnt_lower=0, cnt_upper=0, cnt_symbol=0, cnt_digit=0;

	cout << "Enther the character input\n";
	cin.getline(userstr,20);

	for(int i=0;  i<strlen(userstr);i++)
	{
		if (islower(userstr[i]))
			cnt_lower += 1;
		if (isupper(userstr[i]))
			cnt_upper += 1;
		if (ispunct(userstr[i]))
			cnt_symbol += 1;
		if (isdigit(userstr[i]))
			cnt_digit += 1;
	}
	cout << "lower cnt " << cnt_lower << endl;
	cout << "upper cnt " << cnt_upper << endl;
	cout << "symbol cnt " << cnt_symbol << endl;
	cout << "digits cnt " << cnt_digit << endl;
}