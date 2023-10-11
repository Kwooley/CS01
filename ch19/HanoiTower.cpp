#include <iostream>
using namespace std;

void hanoiTower(int, int, int, int);
int main()
{
	const int FROM = 1;
	const int TEMP = 2;
	const int TO = 3;
	const int NUM_DISCS = 3;

	hanoiTower(NUM_DISCS, FROM, TEMP, TO);
}

void hanoiTower(int num_discs, int from, int temp, int to)
{
	if (num_discs > 0)
	{
		hanoiTower(num_discs - 1, from, to, temp);
		cout << " Move a disk in " << from << " to " << to << " using " << temp << endl;
		hanoiTower(num_discs - 1, temp, from, to);
	}
}