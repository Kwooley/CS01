#include <iostream>
using namespace std;


class Rectangle {
	private:
		int width;
		int height;
	public:
		int 	getWidth() const;
		int 	getHeight() const ;
		int 	getArea() const  ;
		void 	setWidth(int) ;
		void 	setHeight(int) ;
};
int 	Rectangle::getWidth() const 
{ 
	return width; 
}
int 	Rectangle::getHeight() const 
{ 
	return height; 
}
int 	Rectangle::getArea() const 
{ 
	return width*height;
}
 
void 	Rectangle::setWidth(int w) 
{ 
	width = w;
}
void 	Rectangle::setHeight(int h) 
{ 
	height = h;
}


int main()
{
	Rectangle r1;
	r1.setWidth(10);
	r1.setHeight(20);

	cout << "Width " << r1.getWidth() << endl;
	cout << "Height " << r1.getHeight() << endl;
	cout << "area " << r1.getArea() << endl;

}