#include <iostream>
#include <cstdlib>
using namespace std;

class Shape
{
    float radius, length, width;

public:
    Shape()
    {
        radius = 0;
        length = 0;
        width = 0;
        cout << "Default constructor called" << endl;
    }

    Shape(float r)
    {
        radius = r;
        length = 0;
        width = 0;
        cout << "Constructor for circle called" << endl;
    }

    Shape(float l, float w)
    {
        radius = 0;
        length = l;
        width = w;
        cout << "Constructor for rectangle called" << endl;
    }

    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    ~Shape()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;
    Shape c(r);
    cout << "Perimeter of circle = " << c.circlePerimeter() << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    Shape rect(l, w);
    cout << "Perimeter of rectangle = " << rect.rectanglePerimeter() << endl;

    system("pause");
    return 0;
}
