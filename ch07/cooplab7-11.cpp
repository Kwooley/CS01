// 1. Make a vetor variable and the initial N integer numbers
// 2. Sort Vector
// 3. Insert the user number into the vector 
// 4. Delete the item from the vector by seaching the user value.
// 
#include	<iostream>
#include	<iomanip>
#include 	<cstdlib>
#include	<ctime>
#include 	<vector>
using namespace std;

void	makevector(vector<int> &);
void 	insertvector(vector<int> &, int );
void 	deletevector(vector<int> &, int );

int 	randnum(void);
int 	getinput(void);
void	printvector(vector<int> );

int 		main()
{
	const	int 	SIZE=10;
	int 	usernum;
	vector<int> 	number(10);

	srand(time(NULL));

	makevector(number);
	printvector(number);
	usernum = getinput();
	insertvector(number, usernum);
	printvector(number);
	usernum = getinput();
	printvector(number);
	deletevector(number, usernum);
	printvector(number);
}
void	makevector(vector<int>	&number)
{
	for(int i=0; i<number.size(); i++)
		number[i] = randnum() % 20;
	sort(number.begin(), number.end());
}
void 	insertvector(vector<int> &number, int usernum)
{
	int 	flag=1;
	vector<int>::iterator iter;

	for(iter=number.begin(); iter !=number.end(); iter++) {
		if ( usernum < *iter) {
			number.insert(iter, usernum);
			flag = 0;
			break;
		}
	}
	if(flag)
		number.insert(number.end(), usernum);

}
void 	deletevector(vector<int>  &number, int username)
{
	vector<int>::iterator 	iter;

	iter = find(number.begin(), number.end(), username);
	if (iter != number.end())
		number.erase(iter);
	else
		cout << "Delete item : Not found\n";
	
}
int 	getinput(void)
{
		int num;
		cout << "Enter your input\n";
		cin >> num;
		return num;
}
int 	randnum(void)
{
	return rand() % 100;
}
void	printvector(vector<int>	number)
{
	for(auto iter=number.begin(); iter != number.end(); iter++)
		cout << setw(5) << *iter;
	cout << endl;
}