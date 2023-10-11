// ofs test

#include	<iostream>
#include	<fstream>
using 	namespace	std;

int	main(){

	fstream ofs;
	int		num;
	
	ofs.open("test.txt", fstream::out | fstream::trunc);
	
	cout << "Enter your number\n";
	cin >> num;

	while( num != -1)
	{
		if (ofs)
			ofs << num << endl;	
		else	
			cout << "Open Error\n";	
		cout << "Enter your number\n";
		cin >> num;
	}
	
	ofs.close();
}