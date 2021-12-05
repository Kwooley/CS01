// Range-based for loop

#include		<iostream>
using namespace	std;

int	main()
{
	
	int		numbers[5] = {  };

  	for(auto &eachvalue : numbers)
  			cin >> eachvalue;
  	for(auto eachvalue : numbers) 
			cout << eachvalue << endl;  

}