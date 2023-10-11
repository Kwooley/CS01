// ofs test

#include	<iostream>
#include	<fstream>
using 	namespace	std;

int	main(){

	ofstream ofs;

	ofs.open("test.txt");
	ofs << "Test value\n";
	ofs.close();
}