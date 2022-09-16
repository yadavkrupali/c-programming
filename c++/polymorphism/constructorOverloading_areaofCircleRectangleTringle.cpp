/*
 /*Write a program to calculate the area of circle, rectangle and triangle using
constructor Overloading
 Rectangle: Length * breadth
 Triangle: ½ *base* height
 Circle: Pi * radius *radius

*/
#include <iostream>
using namespace std;
class Area
{
public:
    Area(int length, int breadth)
    {
        cout << "Area of rectangle:" << length * breadth << endl;
    }

    Area(float base, double height, float constant = 0.5)
    {
        cout << "Area of triangle:" << constant * base * height << endl;
    }

    Area(int radius)
    {
        float pi = 3.14;
        cout << "Area of circle:" << pi * radius * radius << endl;
    }
};
int main()
{
    Area circle(3);
    Area triangle(10.5, 20.5);
    Area rectangle(10, 20);
}