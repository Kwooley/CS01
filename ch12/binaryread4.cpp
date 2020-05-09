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
	int			i, position;

	ifso.open("namerecords.bin");
	if (!ifso) {
		cout << "File Open Error \n";
		exit(0);
	}
	i=0; position=0;
	while( ifso.read((char *)&nr, sizeof(nr)) ) {
		cout << i << "th record at the position :" << position << "\t";
		printNameRecords(nr);
		i++;
		position = sizeof(nr) * i;
		ifso.seekg(position, ios::beg);
	} 

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