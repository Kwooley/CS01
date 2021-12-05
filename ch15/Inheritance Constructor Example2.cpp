#include    <iostream>
using namespace std;

class rectangle {
    private:
        double  width;
        double  length;
    public:
        rectangle() {
            width = 0;
            length = 0;
        }
        rectangle(double w, double l) {
            width = w;
            length = l;
        }
        double getArea(void) const {
            return width * length;
        }
};

class cube : public rectangle {
    private :
        double height ;
        double volume ;
    public :
        cube() : rectangle() {
            height = 0;
            volume = 0;
        }
        cube(double w, double l, double h) : rectangle(w, l) {
            height = h;
            volume = h * getArea();
        }
        double getVolume() const {
            return volume;
        }
};

int main()
{
    double width=10.0, length=5.0, height=10.0;
    cube mycube(width, length, height);

    cout << "Cube Volume " << mycube.getVolume() << endl;
}