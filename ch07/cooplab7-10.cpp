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
	int 	cnt=0;
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			if (M[i][j] == 1) {
				if ( checkup(M,i,j) && checkdown(M,i,j) && checkleft(M,i,j) && checkright(M,i,j)) {
					cout << "Found cross center " << i << "," << j << endl;
					M[i][j] = 8;
					cnt++;
				}				
			}
	return cnt;
}

bool	checkup(int M[][10], int i, int j)
{
	if (i == 0)
		return false;
	if (M[i-1][j] == 1)
		return true;
	else
		return false;
}

bool	checkdown(int M[][10], int i, int j)
{
	if (i == 9)
		return false;
	if (M[i+1][j] == 1)
		return true;
	else
		return false;
}
bool	checkleft(int M[][10], int i, int j)
{
	if (j == 0)
		return false;
	if (M[i][j-1] == 1)
		return true;
	else
		return false;
}
bool	checkright(int M[][10], int i, int j)
{
	if (j == 9)
		return false;
	if (M[i][j+1] == 1)
		return true;
	else
		return false;
}