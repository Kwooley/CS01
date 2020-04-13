#include		<iostream>
#include		<fstream>
using namespace std;

int			findcross(int [][10]);
bool		checkup(int [][10], int, int);
bool		checkdown(int [][10], int, int);
bool		checkleft(int [][10], int, int);
bool		checkright(int [][10], int, int);
void		printout(int [][10], int);

int		main()
{
	int		cnt=0;
	int		maze[10][10] = { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
							 0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
							 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
							 0, 1, 0, 0, 1, 0, 0, 0, 0, 0,
							 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
							 0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
							 0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
							 0, 1, 0, 0, 1, 0, 1, 1, 0, 0,
							 0, 1, 0, 0, 1, 1, 1, 0, 0, 0,
							 0, 1, 0, 0, 1, 1, 1, 0, 0, 0 };
	cnt = findcross(maze);
	printout(maze, cnt);
	
}
void	printout(int M[][10], int cnt)
{
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) 
				cout << setw(5) << M[i][j];
		cout << endl;
	}
	cout << "Total found cross " << cnt << endl;
}

int		findcross(int M[][10])
{
	int 		cnt=0;   // the number of cross found

	return cnt;
}

bool	checkup(int M[][10], int i, int j) // check whether M[i+1][j] == 1
{
	return true;
	
}

bool	checkdown(int M[][10], int i, int j) // check whether M[i-1][j] == 1
{
	return true;
	
}
bool	checkleft(int M[][10], int i, int j) // check whether M[i][j-1] == 1
{
	return true;
	
}
bool	checkright(int M[][10], int i, int j) // check whether M[i][j+1] == 1
{
	return true;
	
}