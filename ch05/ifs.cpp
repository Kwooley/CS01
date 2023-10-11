// ifs

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream ifs;
	string str;

	ifs.open("testofs.txt");
	while (ifs >> str)
	{
		if (ifs)
			cout << str << " read from file\n";
		else
			break;
	}

	ifs.close();
}