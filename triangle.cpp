#include <iostream>
using namespace std;

int main()
{
    // programm to calculate the area of a triangle
    double base, height, area;
    cout << "enter the base of the triangle: ";
    cin >> base;
    cout << "enter the height of the triangle: ";
    cin >> height;
    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area;
    return 0;
}