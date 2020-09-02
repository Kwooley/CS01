#include	<iostream>
#include	<fstream>
#include	<cstdlib>
#include	<ctime>
using namespace std;

int	main()
{
	const int N=10;
	int  number[N];
	ofstream ofs;

	srand(time(0));
	ofs.open("arraytofile.txt");
	if (!ofs){
		cout << "Error : open to file\n";
		exit(0);
	}
	for(int i=0;i<N; i++){
		number[i] = rand() % 100;
		ofs << number[i] << endl;
	}
}
