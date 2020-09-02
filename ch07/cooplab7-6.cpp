// array insertion


#include	<iostream>
#include	<iomanip>
using 	namespace	std;

void	insertone(int [], int &, int);
void	deleteone(int [], int &, int);
void	printout(int [], int);


int 	main()
{
	const	int SIZE=100;
	int 	usernum;
	int 	length=10;
	int 	number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};

	cout << "Enter the number to insert\n";
	cin	>> usernum;
	printout(number, length);
	insertone(number, length, usernum);
	printout(number, length);

	cout << "Enter the number to delete\n";
	cin >> usernum;
	deleteone(number, length, usernum);
	printout(number, length);
}
void	insertone(int number[], int &length, int usernum)
{
	int 	pos, i;
	for(i=0; i<length; i++)
		if( number[i] > usernum)
			break;
	pos = i; 
	for(i=length-1; i>=pos; i--)
		number[i+1] = number[i];
	number[i+1] = usernum;
	length += 1;
	return;
}
void	deleteone(int number[], int &length, int usernum)
{
	int 	pos=length,i;
	for(i=0;i<length;i++) {
		if (number[i] == usernum) {			
			pos = i;
			break;
		}
	}
	for(i=pos; i<length-1; i++){
		number[i] = number[i+1];
	}
	number[length-1] = 0;
	length -= 1;
}

void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}


