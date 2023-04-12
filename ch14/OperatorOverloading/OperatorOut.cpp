#include <iostream>
using namespace std;

class Rect
{
private:
	int width;
	int height;

public:
	Rect() : width(0), height(0) {}
	Rect(int w, int h) : width(w), height(h) {}
	friend ostream &operator<<(ostream &, Rect &);
};

ostream &operator<<(ostream &os, Rect &r)
{
	cout << "Rectangle Information \n";
	cout << "Width: " << r.width << "\n";
	cout << "Height: " << r.height << "\n";
	return os;
}

int main()
{
	Rect r1(10, 20);
	cout << r1;
}