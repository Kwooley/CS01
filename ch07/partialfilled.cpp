#include		<iostream>
#include		<iomanip>
using	namespace	std;


int	main()
{
	const int 	SIZE = 100;
	int 		numbers[SIZE] = {};
	int 		val, i=0, inputCount;

	cout << "Enter your input. -1 to finish\n";
	cin >> val;
	while ( val != -1 )
	{
			numbers[i++] = val;
			cout << "Enter your input. -1 to finish\n";
			cin >> val;
	}
	inputCount = i;

	for(int  val:numbers)
		cout << val;         // print out 100 items;
	cout << endl;

	
	for(i=0; i<inputCount; i++)
		cout << setw(5) << numbers[i] ;   // print the partially filled items stored user inputs.
	cout << endl;
}