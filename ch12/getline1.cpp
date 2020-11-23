// Chapter 12. Advanced File Operations
// getline1.cpp

#include	<iostream>
#include	<fstream>

using namespace std;

int		main()
{
	ifstream	ifso;
	char		readline[256];

	ifso.open("cany.txt", ifstream::in);
	if (! ifso ) {
		cout << "Open Error \n";
		exit(0);
	}

	ifso.getline(readline, 256, ',');
	cout << readline << endl;

	ifso.close();
}