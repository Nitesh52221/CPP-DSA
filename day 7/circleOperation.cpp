// Problem : Given radius of a circle. Write a function to print the area and circumference of the circle.
#include <iostream>
using namespace std;
double Area(double r, double pi)
{
    return (pi * r * r);
}
double Circumference(double r, double pi)
{
    return (2 * pi * r);
}

int main()
{
    // write your code here
    double r = 3, pi = 3.14;
    double area, circumference;
    area = Area(r, pi);
    circumference = Circumference(r, pi);
    cout << "Area : " << area << endl;
    cout << "Circumference : " << circumference << endl;
    return 0;
}