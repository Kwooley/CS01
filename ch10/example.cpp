//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include    <iostream>
#include    <fstream>
#include	<iomanip>
#include	<string>
using namespace std;

const   unsigned short MAX = 5000;
string  stname[MAX];
char    gender[MAX];
int     year[MAX];
string  name[MAX];
int     cnt[MAX];
int     Numrecord;

int     constructRecord(void);
void    retrieveRecord(int, string);
void    printRecord(int);
int main()
{
	int     year;
	string state;

	Numrecord = constructRecord();
	for (int i = 0; i < Numrecord; i++)
		printRecord(i);

	cout << "Enter the year: (2011-2018)";
	cin >> year;
	cout << "Enter the state name (2 upper case letters): ";
	cin >> state;
	retrieveRecord(year, state);
}
int     constructRecord()
{
	ifstream ifs;
	string	readline, splitstr;
	int commaposition, start = 0;
	int idx, fieldidx;

	ifs.open("all.txt");
	if (!ifs) {
		cout << "File failed to open.\n";
		exit(0);
	}
	idx = 0;
	while (ifs >> readline) {
		cout << readline << endl;
		fieldidx = 0;
		start = 0;
		while ((commaposition = readline.find(',', start)) != string::npos) {
			splitstr = readline.substr(start, commaposition - start);
			cout << "split " << splitstr << endl;
			switch (fieldidx) {
			case 0:
				stname[idx] = splitstr;
				break;
			case 1:
				gender[idx] = splitstr[0];
				break;
			case 2:
				year[idx] = stoi(splitstr);
				break;
			case 3:
				name[idx] = splitstr;
				break;
			default:
				cout << "Field error\n";
				exit(0);
			}
			start = commaposition + 1;
			fieldidx += 1;
		}
		splitstr = readline.substr(start, readline.size() - start + 1);
		cout << "split " << splitstr << endl;
		cnt[idx] = stoi(splitstr);
		idx += 1;
	}
	return idx;
}
void    retrieveRecord(int useryear, string userstate)
{
	for (int i = 0; i < Numrecord; i++) {
		if (year[i] == useryear && stname[i] == userstate)
			printRecord(i);
	}
}
void    printRecord(int idx)
{
	cout << stname[idx] << "\t\t" << gender[idx] << "\t" << year[idx] << "\t" <<
		setw(10) << name[idx] << "\t" << cnt[idx] << "\n";
}
//Error
//terminate called after throwing an instance of 'std::invalid_argument'
//what():  stoi