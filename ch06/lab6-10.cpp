#include	<iostream>
#include	<iomanip>
using namespace	std;

void	swap(int &, int &);
void	swap(int &, int &, int &);
void	swap(int &, int &, int &, int &);
void	getinput(int &);
void	getinput(int &, int &);
void	getinput(int &, int &, int &);
void	getinput(int &, int &, int &, int &);

int	main()
{
	int 	num;
	int	val1, val2, val3, val4;

	do {
		getinput(num);   	// num must be in [2,3,4 or -1]
		switch(num) {
			case	2:
				getinput(val1, val2);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				swap(val1,val2);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				break;
			case 	3:
				getinput(val1, val2, val3);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				swap(val1,val2, val3);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				break;
			case 	4:
				getinput(val1, val2, val3, val4);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				swap(val1,val2, val3, val4);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				break;
			default :
				break;
		}
	} while ( num != -1);
}
void	getinput(int &num)
{
	do {
	cout << "Enter your input ( 2, 3, or 4 )\n";
	cin >> num; 
	} while ( num != 2 && num != 3 && num != 4 && num != -1);
}
void	getinput(int &num1, int &num2)
{
	cout << "Enter your input ( 2 integers )\n";
	cin >> num1 >> num2 ;
}
void	getinput(int &num1, int &num2, int &num3)
{
	cout << "Enter your input ( 3 integers )\n";
	cin >> num1 >> num2 >> num3;
}
void	getinput(int &num1, int &num2, int &num3, int &num4)
{
	cout << "Enter your input ( 4 integers )\n";
	cin >> num1 >> num2 >> num3 >> num4;
}
void	swap(int &i, int &j)
{
	int 	tmp;
	tmp = i;
	i = j;
	j = tmp;
}
void	swap(int &num1, int &num2, int &num3)
{
	if ( num1 >  num2 )
		swap(num1, num2);
	if ( num1 > num3 )
		swap(num1, num3);
	// at this moment, the num1 is min.
	
	if ( num2 > num3)
		swap(num2, num3);
			
}
void	swap(int &num1, int &num2, int &num3, int &num4)
{
	swap(num1, num2);
	swap(num2, num3);
	swap(num3, num4);
}


