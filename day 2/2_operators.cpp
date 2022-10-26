// Problem : Relational Operators
//  == : is Equal to
//  != : not equal to
//  > greater than
//  < less than
// >= : greater than or equal to
// <= : less than or equal to

#include <iostream>

using namespace std;
int main()
{
    // write your code here
    int num1 = 10, num2 = 20;

    cout << "C++ Relational Operator" << endl;
    cout << (num1 == num2) << endl; // false(0)
    cout << (num1 != num2) << endl; // true(1)
    cout << (num1 > num2) << endl;  // false (0)
    cout << (num1 < num2) << endl;  // true (1)
    cout << (num1 >= num2) << endl; // false(0)
    cout << (num1 <= num2) << endl; // true(1)
    return 0;
}