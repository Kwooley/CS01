#include		<iostream>
#include		<iomanip>
#include		<cmath>
using 	namespace	std;

const	int N = 5;
int 	g1,g2,g3,g4,g5;

int		getmedian(void);
int		getnearestavg(int);
void	showmedianposition(int);
void	swapall(void);

int	main()
{
	int	median, nearest;
	double avg;
	g1 = 99; g2=88; g3= 80; g4=122; g5=77;

	median 	= getmedian();
	nearest = getnearestavg(median);
	showmedianposition(median);
}
void	swapall(void)
{
	if (g1 > g2)
		swap(g1, g2); 
	if (g2 > g3)
		swap(g2, g3); 
	if (g3 > g4)
		swap(g3, g4);
	if (g4 > g5)
		swap(g4, g5);
}
int	getmedian()
{

}
int	getnearestavg(int median)
{

}
void	showmedianposition(int M)
{

}
