//* Make the program that calculates the circle, rectangle, and triangle area according to the user input.
//*         User input 1 : 
//*                 Calculate the circle area. 3.14 x radius x radius
//*         User input 2 : 
//*                 Calculate the rectangle area. height x width
//*         User input 3 :
//*                 Calculate the triangle area. height x width x 0.5
//*         User input 4 :
//*                 quit the program.

#include        <iostream>
using namespace         std;

int main()
{
        const   double  PI = 3.1459;
        double          area, width, height, radius;
        int             userchoice;

        cout << " Enter the user menu \n";
        cin >> userchoice;

        switch(userchoice){
                case 1:
                        cout << "Enter the radius\n";
                        cin >> radius;
                        area = PI * radius * radius;
                        cout << "The circle area is " << area << endl;
                        break;
                case 2:
                        cout << "Enter the width and height\n";
                        cin >> width >> height;
                        area = width * height;
                        cout << "The rectangle area is " << area << endl;
                        break;
                case 3:
                        cout << "Enter the width and height\n";
                        cin >> width >> height;
                        area = width * height * 0.5;
                        cout << "The triangle area is " << area << endl;
                        break;
                case 4:
                        cout << "Program quit\n";
        }
}