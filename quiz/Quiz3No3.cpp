// Quiz 3 No. 3
//

#include	<iostream>
#include	<iomanip>
using 	namespace std;

void	printout(int [], int);
int 	mysteryfunction(int [], int, int);
int 	main()
{
	const	int	SIZE=10;
	int		numbers[SIZE] = {20, 25, 35, 30, 5};
	int		numelm = 5;
	int 	usernum;

	// Take the user input 
	cout << "Enter your input\n";
	cin >> usernum;

	printout(numbers, numelm);
	numelm = mysteryfunction(numbers, numelm, usernum);
	printout(numbers, numelm);

}
void	printout(int numbers[], int numelm)
{	
	// print out all the contents of array numbers
	for(int i=0; i<numelm; i++)
		cout << setw(5) << numbers[i];
	cout << endl;
}
int 	mysteryfunction(int 	numbers[], int numelm, int usernum)
{
	int i;
	for(i=0; i<numelm; i++){
		if (numbers[i] == usernum)
			break;
	}
	if (i != numelm){
		for(int j=i; j<numelm-1; j++)
			numbers[j] = numbers[j+1];
		numelm -= 1;
	}
	else
		cout << "Number is not found\n";
	return numelm;
}