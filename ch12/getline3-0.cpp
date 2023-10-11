// Chapter 12. Advanced File Operations
// 

#include	<iostream>
#include 	<fstream>
#include	<sstream>
#include	<string>
using  namespace	std;

int		main()
{
	ifstream	ifso;
	string 		buf, field;
	stringstream ss;

	ifso.open("cany.txt", fstream::in);
	if (!ifso){
		cout << "Open Error\n";
		exit(0);
	}

	ifso >> buf;
	ss << buf;
	while(getline(ss, field, ',')) {
		cout << "Field " << field << "\t" ;
	}
	cout << endl;
	ss.clear();


	ifso >> buf;
	ss << buf;
	while(getline(ss, field, ',')) {
		cout << "Field " << field << "\t" ;
	}
	cout << endl;

	ss.clear();
}