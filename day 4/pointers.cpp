// Problem : Pointers
#include <iostream>
using namespace std;
int main()
{
    // write your code here

    int a = 10;  // Normal Variable
    int *p = &a; // Pointer Variable - store address of another variable

    cout << "value of a = " << a << "\n";
    cout << "Value of p = " << p << "\n";
    cout << "Address of a = " << &a << "\n";
    cout << "Address of p = " << &p << "\n";
    cout << "Value stored at p = " << *p << "\n";
    return 0;
}