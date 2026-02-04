// Write a program to compute the area of a tringle and circle by area() function 
#include <iostream>
using namespace std;


float area(float base, float height)
{
    return 0.5 * base * height;
}


float area(float radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    float base, height, radius;

    // Triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height) << endl;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    return 0;
}
