#include	<iostream>
#include	<fstream>
using namespace std;


int	main()
{
	const int	SIZE=10;
	ofstream		outputFile;
	int 		i, numbers[SIZE];

	outputFile.open("arraytofile.txt");
	for(i=0; i<SIZE; i++)
		numbers[i] = i;

	for(i=0; i<SIZE; i++)
		outputFile << numbers[i] << endl;

	outputFile.close();

}