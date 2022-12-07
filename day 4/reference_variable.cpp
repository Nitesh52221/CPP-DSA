// Problem : REference Varibale
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int a = 10;   // Normal Variable
    int *p = &a;  // Pointer Variable
    int &ref = a; // Reference Variable

    cout << "Value of a = " << a << " \n";
    cout << "Value of ref = " << ref << " \n";
    cout << "Value of p = " << p << " \n";

    cout << "Address of a = " << &a << " \n";
    cout << "Address of p = " << &p << " \n";
    cout << "Address of ref = " << &ref << " \n";

    ref = 20;
    cout << "Value of a = " << a << " \n";
    cout << "Value of ref = " << ref << " \n";

    int &ref = a;
    return 0;
}