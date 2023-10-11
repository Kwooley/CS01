#include	<iostream>
#include	<iomanip>
using namespace std;

int	division(int, int);
float	division(float, float);

int   main()
{
	int	intNumA=10, intNumB=2;
	float	fNumA=10.5, fNumB=2.0;
	int	int_result;
	float	float_result;

	float_result = division(fNumA, fNumB);
	cout << "float result :" << setw(5) << float_result << endl;
	int_result = division(intNumA, intNumB);
	cout << "int result :" << int_result << endl;

}

int	division(int i1, int i2)
{
	return i1/i2; 
}
float	division(float f1, float f2)
{
	return f1/f2; 
}
