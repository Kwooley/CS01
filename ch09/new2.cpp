#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
	int	*ptr;
	ptr = new int[N];

	for(int i=0; i<N; i++)
		*(ptr+i) = i;

	for(int i=0;i<N;i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}