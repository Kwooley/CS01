#include <iostream>
using namespace std;

class Rectangle {
       private:
        int width;
        int height;

       public:
        void setWidth(double);
        void setHeight(double);
        double getWidth(void) const;
        double getHeight(void) const;
        double getArea(void) const;
};

int main() {
        Rectangle box;

        box.setWidth(10.0);
        box.setHeight(20.0);
        cout << "The rectangle box's Area: " << box.getArea() << endl;
}

void Rectangle::setWidth(double w) {
        width = w;
}
void Rectangle::setHeight(double h) {
        height = h;
}
double Rectangle::getWidth(void) const {
        return width;
}
double Rectangle::getHeight(void) const {
        return height;
}
double Rectangle::getArea(void) const {
        return width * height;
}