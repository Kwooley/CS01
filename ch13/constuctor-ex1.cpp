#include <iostream>
using namespace std;

class Rect
{
private:
	int width;
	int height;

public:
	Rect();
	Rect(int w, int h);
	Rect(int v);
	void setWidth(int);
	void setHeight(int);
	int getWidth(void) const;
	int getHeight(void) const;
	int getArea(void) const;
};
Rect::Rect() : width(0), height(0)
{
}
Rect::Rect(int w, int h) : width(w), height(h)
{
	if (w < 0 || h < 0)
	{
		cout << "invalid width or height\n";
		exit(1);
	}
}
Rect::Rect(int v) : width(v), height(v)
{
}
int Rect::getWidth(void) const
{
	return width;
}
int Rect::getHeight(void) const
{
	return height;
}
void Rect::setWidth(int w)
{
	width = w;
}
void Rect::setHeight(int h)
{
	height = h;
}

int main()
{
	Rect r1;
	cout << r1.getWidth() << endl;
	cout << r1.getHeight() << endl;

	Rect r2(10);
	cout << r2.getWidth() << endl;
	cout << r2.getHeight() << endl;

	Rect r3(50, 100);
	cout << r3.getWidth() << endl;
	cout << r3.getHeight() << endl;
}