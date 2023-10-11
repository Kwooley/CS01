#include <iostream>
using namespace std;

class Rect
{
private:
	int width;
	int height;
	static int count;

public:
	Rect() : Rect(0, 0) { count += 1; };
	Rect(int w, int h) : width(0), height(0) { count += 1; };
	static int getCount(void);
	static void addCount(void);
};

int Rect::count = 0;
int Rect::getCount(void)
{
	return count;
}
void Rect::addCount(void)
{
	count += 1;
}

int main()
{
	Rect r1(10, 10);
	Rect r2(20, 20);
	Rect r3(30, 30);

	cout << "The value of static count: " << Rect::getCount() << endl;
}
