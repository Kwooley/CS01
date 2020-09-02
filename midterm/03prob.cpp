// 03


#include	<iostream>
#include	<fstream>
using		namespace	std;

int 	readfile(int &min, int &max, ifstream &);

int 	main()
{
	int			lines, min, max;
	ifstream 	ifso;

	lines = readfile(min, max, ifso);
	cout << "Number of lines " << lines << endl;
	cout << "Min value " << min << " Max value " << max << endl;
}

int	readfile(int &min, int &max, ifstream &ifso)
{
	return numoflines;
}