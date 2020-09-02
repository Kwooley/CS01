// Final No. 2
// Bits Array : [1 1 0 0 1 0 1 1]
// Converts to Decimal Numbers
// Test Data Set = 1111 1111, 1000 0000, 1111 0000, 0000 1111

#include	<iostream>
#include	<cmath>
using	namespace std;

int 	converttodecimal(int [], int);
int main()
{
	const int BITS = 8;
	int	binary[BITS] =  {1,1,0,0,0,0,0,0};
	int ret;

	ret = converttodecimal(binary, BITS);
	cout << "Decimal Numbers : " << ret << endl;
}
int 	converttodecimal(int binary[], int BITS)
{
	int	decnum=0;

	for(int i=0;i<BITS; i++){
		if(binary[i])
			decnum = decnum + pow(2, BITS-i-1);
	}
	return decnum;
}
