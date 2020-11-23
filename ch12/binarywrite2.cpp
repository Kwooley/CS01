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

void 	printNameRecords(Namerecords , int);

int		main()
{
	ofstream	ofso;
	Namerecords nr;

	ofso.open("name.bin");
	
	nr.stname 	= "CA";
	nr.sex		= "F";
	nr.year		= 1910;
	nr.name 	= "Mary";
	nr.count 	= 295;

	ofso.write((char *)&nr, sizeof(nr));
	cout << sizeof(nr) << " bytes wrote to the file. \n";

	nr.stname 	= "CA";
	nr.sex		= "F";
	nr.year		= 1910;
	nr.name 	= "Helen";
	nr.count 	= 239;

	ofso.write((char *)&nr, sizeof(nr));
	cout << sizeof(nr) << " bytes wrote to the file. \n";

	ofso.close();

}

void 		printNameRecords(Namerecords nr, int numofRecords)
{
	for(int i=0; i<numofRecords; i++){
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
	}
}