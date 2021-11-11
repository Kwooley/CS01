#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int length;

public:
	Rectangle() : width(0), length(0){};
	Rectangle(int w, int h) : width(w), length(h) {}
	int getArea()
	{
		return width * length;
	}
	int perimeter()
	{
		return (2 * width + 2 * length);
	}
};

class Square : public Rectangle
{
public:
	Square() : Rectangle() {}
	Square(int w) : Rectangle(w, w) {}
};

int main()
{
	Square s(10);
	cout << "The area of Square: " << s.getArea() << endl;
	cout << "The Perimeter of Square: " << s.perimeter() << endl;
}