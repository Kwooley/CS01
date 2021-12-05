#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;

public:
	int getWidth() const { return width; };
	int getHeight() const { return height; };
	int getArea() const { return width * height; };
	void setWidth(int w) { width = w; };
	void setHeight(int h) { height = h; };
};

int main()
{
	Rectangle r1;
	cout << "Width " << r1.getWidth() << endl;
	cout << "Height " << r1.getHeight() << endl;
	r1.setWidth(10);
	r1.setHeight(20);

	cout << "Width " << r1.getWidth() << endl;
	cout << "Height " << r1.getHeight() << endl;
	cout << "area " << r1.getArea() << endl;
}