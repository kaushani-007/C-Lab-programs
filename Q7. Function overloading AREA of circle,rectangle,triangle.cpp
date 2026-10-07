#include <iostream>
#include <cmath>
using namespace std;
class Area
{
public:
    float AREA(float r)
    {
        return 3.14159 * r * r;
    }

    float AREA(float l, float b)
    {
        return l * b;
    }

    float AREA(float b, float h, int)
    {
        return 0.5 * b * h;
    }
};
int main()
{
    Area a;
    float r, l, b, h;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << a.AREA(r) << endl;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << a.AREA(l, b) << endl;
    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle = " << a.AREA(b, h, 0) << endl;
    return 0;
}
