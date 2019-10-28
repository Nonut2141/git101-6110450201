#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle 

int main()
{
    point pt, p;
    double radius, x, y;

    cout << "Center of Circle: ";
    cin >> p.xPosition >> p.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;

    cout << "Point to Check: ";
    cin >> pt.xPosition >> pt.yPosition;

    Circle c(p, radius);
    
    x = pt.xPosition;
    y = pt.yPosition;
    cout << "Area of Circle is " << c.area() << endl;
    cout << "Distance from Center to Point (" << x << ", " << y << ") is " << c.distanceFromCenter(pt) << endl;
    if (c.contains(pt) == 1) cout << "This circle contains this point." << endl;
    else cout << "This point is not in this circle." << endl;
}
