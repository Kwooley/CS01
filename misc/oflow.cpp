#include 	<iostream>
#include	<cfloat>
using namespace std;

int main(){
	
	float f;
	short s;
	
	cout << SHRT_MAX << endl;
	cout << FLT_MAX << endl;	
	s = 3276.7E+01;	
	printf("\n float 32767.0 to short s : %d\n", s);
	f = 32767E+02;
	cout << f << "overflow" <<  endl;
	return 0;
}
