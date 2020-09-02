//

#include	<iostream>
#include	<iomanip>
using namespace	std;

double nthpowerp(int);
double nthpowern(int);
void   printout(double);

int     main()
{
        int     n;
	double	result;
        cout << "Enter your input\n";
        cin >> n;

      	if ( n > 0)
		result = nthpowerp(n);
      	else if ( n<0)
		result = nthpowern(n);
	else
		result  = 1 ;
        printout(result);
}
double	nthpowerp(int n)
{
	int 	i;
	double 	pow=1.0;
	for (i=0; i<n; i++)
		pow *= 2;
	return pow;
}
double	nthpowern(int n)
{
	int 	i;
	double 	pow=1.0;
	for (i=n; i<0; i++)
		pow *= 2;
	pow = 1.0/pow;
	return pow;
}
void	printout(double result)
{
	cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
