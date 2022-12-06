// Problem : Write a C++ program to compute the perimeter and area of a rectangle with the given length and breadth.

// Input:
// 7 5
// [where length = 7, breadth = 5]

// Output:
// Perimeter = 24; Area = 35

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int l, b;

    cout << "Perimeter anad Area of  Rectangle" << endl;
    cin >> l >> b;
    int perimeter = 2 * (l + b);
    int area = l * b;
    cout << "Perimeter :" << perimeter << ", Area:" << area << endl;
    return 0;
}