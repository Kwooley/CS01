#include	<iostream>
#include	<fstream>
using namespace std;


int	main()
{

	const  int    SIZE=10;   
	ifstream     inputFile ;
	int          numbers[SIZE], readcnt = 0;

	inputFile.open("arraytofile.txt");
	while( inputFile >> numbers[readcnt] )
		readcnt++;

	for(int i=0; i<readcnt; i++)
		cout << "Read from file " << numbers[i] << endl;
	inputFile.close();
}