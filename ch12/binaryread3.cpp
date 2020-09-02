// Chapter 12. Advanced File Operations
// 

#include	<iostream>
#include 	<fstream>

using  namespace	std;

struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

void 	printNameRecords(Namerecords);

int		main()
{
	ifstream	ifso;
	Namerecords nr;
	int			recnum, position;

	ifso.open("namerecords.bin");

	do {
		cout << "Enter the Record number to print. -1 to quit \n";
		cin >> recnum;
		position = sizeof(nr) * (recnum - 1);
		cout << "pos " << position << endl;
		ifso.seekg(position, ios::beg);
		ifso.read((char *)&nr, sizeof(nr));
		printNameRecords(nr);
	} while ( recnum != -1);

	
	ifso.close();
}

void 		printNameRecords(Namerecords nr)
{
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
}