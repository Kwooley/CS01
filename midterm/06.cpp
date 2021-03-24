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
	for(int i=0; i<N/2+1; i++)
		swapall();
	return g3;
}
int	getnearestavg(int median)
{
	int		nearest;
	double 	avg;
	swapall();
	avg = static_cast<double>((g1+g2+g3+g4+g5))/N;

	if ( median < avg ) 
		if ( g4 < avg)
			nearest = ( abs(avg-g4) < abs(avg-g5))? g4 : g5;
		else
			nearest = ( abs(avg-g3) < abs(avg-g4))? g3 : g4;
	else
		if ( g2 < avg)
			nearest = ( abs(avg-g2) < abs(avg-g3))? g2 : g3;
		else
			nearest = ( abs(avg-g1) < abs(avg-g2))? g1 : g2;

	cout << "The average is " << setw(5) << avg << endl;
	cout << "The nearest value from the average" << setw(5) << nearest << endl;
	return nearest;
}
void	showmedianposition(int M)
{
	int 	midpoint;
	midpoint = (g1+g5)/2;
	cout << "The number list: " << setw(5) << g1 << setw(5) << g2 << setw(5) << g3 << setw(5) << g4 << setw(5) << g5 << endl;
	cout << "The real midpoint between " << g1 <<  " and " << g5 << " is : " << midpoint << endl;
	cout << "The median value is " << setw(5) << M << endl;
	cout << g1;
	for(int i=g1;i<=g5;i++){
		if (i == M )
			cout << '+';
		else if (i == midpoint)
			cout << '0';
		else	
			cout << '-';
	}
	cout << g5 << endl;
}
