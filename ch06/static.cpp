#include	<iostream>
using	namespace	std;

void	myfunction(void);
int	main()
{
	myfunction();
	myfunction();
}
void	myfunction()
{
	static int number=10;
	int		i = 0;

	i++;
	number += 10;
	cout << " Call Number " << i <<" "<< number << endl;
}
