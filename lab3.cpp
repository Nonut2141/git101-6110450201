#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;
class Circle{
private:
    point p;
    double radius;
public:
    Circle(point p, double radius){
        this->p.xPosition = p.xPosition;
        this->p.yPosition = p.yPosition;
        this->radius = radius;
    }

    double area(){
    return M_PI*pow(this->radius, 2);
    }

    double distanceFromCenter(point pt){
        return sqrt(pow(pt.xPosition - p.xPosition, 2) + pow(pt.yPosition - p.yPosition, 2));
    }

    int contains(point pt){
        double count = sqrt(pow(pt.xPosition - p.xPosition, 2) + pow(pt.yPosition - p.yPosition, 2));
        if(count > this->radius) return 0;
        else return 1;
    }
};
int main()
{
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}