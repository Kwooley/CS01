#include	<iostream>
using namespace std;


void getinput(int *inp1, int *inp2);
int inputvalidate(int inp1, int inp2);
int doprocessing(int inp1, int inp2);
int dospecificprocessing(int inp2);
void printout(int res);


int main()
{
	int inp1, inp2;

	getinput(&inp1, &inp2);
	int res = doprocessing(inp1, inp2);
	printout(res);
}
void	getinput(int *inp1, int *inp2)
{
	cout << "Enter your input";
	cin >> *inp1 >> *inp2;
	cout << "your input \n" << *inp1 << ' ' << *inp2 << endl;
	int valid = inputvalidate(*inp1, *inp2);

	if (!valid) {
		cout << "Invalid input. Program stop\n";
		exit(0);
	}
}
int	inputvalidate(int inp1, int inp2)
{
	int res;
	(inp1 <0 || inp2 <0) ? res = 0 : res = 1;
	return res;
}
int	doprocessing(int inp1, int inp2)
{
	int res;

	res = inp1 + dospecificprocessing(inp2);
	return res;
}
int 	dospecificprocessing(int inp2)
{
	int sum=0,i;
	for(i=0; i<inp2; i++)
		if (i%2==0)
			sum += i;
	cout << "TTT" << sum << inp2 << endl;
	return sum;
}
void	printout(int res)
{
	cout << "Result : " << res << endl;
}
