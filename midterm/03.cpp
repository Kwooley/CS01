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
	int		i=0, num;

	ifso.open("mid02.txt");

	if (ifso){
		while (ifso >> num){
			if ( i == 0 )
				min = max = num;
			if (min > num)
				min = num;
			if (max < num)
				max= num;
			i++;
		}
	}
	return i;
}