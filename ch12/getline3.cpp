// Chapter 12. Advanced File Operations
// getline3.cpp
#include	<iostream>
#include 	<fstream>
#include	<sstream>
#include	<string>
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
	string 		buf, field;
	int			i=0, fcnt=0;
	stringstream ss;

	ifso.open("cany.txt", fstream::in);
	if (!ifso){
		cout << "Open Error\n";
		exit(0);
	}

	while( (i<10) && (getline(ifso,buf, '\n'))) {
		cout << "fild " << buf << endl;
		ss << buf;
		while(getline(ss, field, ',')) {
			switch(fcnt){
				case 0:
						nr.stname = field;
						break;
				case 1:
						nr.sex = field;
						break;
				case 2:
						nr.year = stoi(field);
						break;
				case 3:
						nr.name = field;
						break;
				case 4:
						nr.count = stoi(field);
						break;
			}
			fcnt = ++fcnt % 5;
		}
		i++;
		ss.clear();
		printNameRecords(nr);
	}

}
void 		printNameRecords(Namerecords nr)
{
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
}