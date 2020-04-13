// 02


#include	<iostream>
#include	<fstream>
#include	<ctime>
#include	<cstdlib>
using		namespace	std;

int 	getinput(void);
int 	getrandom(void);
void 	makefile(int, ofstream &);

int 	main()
{
	int			num;
	ofstream 	ofso;

	srand(time(NULL));

	num = getinput();
	makefile(num, ofso);
}

int 	getinput()
{
	int num;
	do {
		cout << "How many number do you want to write into a file \n";
		cin >> num;	
	} while (num <0 );
	return num;
		
}

void	makefile(int num, ofstream &ofso){
	int 	i, rdnum;
	
	ofso.open("mid02.txt", fstream::in | fstream::out | fstream::trunc);
	if (ofso) {
		for(i=0; i<num; i++) {
			rdnum = getrandom();
			ofso << rdnum << endl;
			cout << rdnum << endl;
		}
	}
}

int 	getrandom(){
	return rand() % 100;
}