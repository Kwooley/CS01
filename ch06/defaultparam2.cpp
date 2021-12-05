#include <iostream>
using namespace std;


int	areaWH(int W=10, int H=10);
int main()
{
	int	area;

	area = areaWH(20, 30); // Argument 20, 30 are passed
	cout << area << " 20, 30\n";

	area = areaWH(20);  // the first argument is specified, and 2nd arg is passwd with default 10.
	cout << area << " 20, 10\n";

	area = areaWH();
	cout << area << " 10, 10\n";
}

int	areaWH(int w, int h)
{
	return w*h;
}
