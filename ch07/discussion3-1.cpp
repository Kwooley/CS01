// Range-based for loop

#include		<iostream>
using namespace	std;

int	main()
{
	
	int		numbers[5] = {  };

	for(int eachvalue : numbers) {
			eachvalue += 10;
			cout << eachvalue << endl;  // 10, 10, 10, 10, 10
  	}
 	for(int eachvalue : numbers) {
			cout << eachvalue << endl;  // 0, 0, 0, 0, 0
  	}
	

	for(int &eachvalue : numbers) // Integer Reference Variable
			eachvalue += 10;
  	for(int eachvalue : numbers)
			cout << eachvalue << endl;  // 10, 10, 10, 10, 10
 

  	for(int &eachvalue : numbers)
  			cin >> eachvalue;
  	for(int eachvalue : numbers) 
			cout << eachvalue << endl;  

}