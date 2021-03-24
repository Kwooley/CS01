// final No. 1

// Test data set = 2,3,7,8, 128, 127, 255, 256


#include	<iostream>
#include	<cmath>
using namespace std;

void makebin(int);
int main()
{
	int		num = 127;
	makebin(num);
}

void	makebin(int num)
{
	int 	i=0, bits;
	while(pow(2,i) <= num)
		i++;
	bits = i;
	for(i=0; i<bits; i++){
		if (num >= pow(2,bits-i-1)){
			num = num - pow(2,bits-i-1);
			cout << 1;
		}
		else
			cout << 0;
	}
	cout << "\n";
}