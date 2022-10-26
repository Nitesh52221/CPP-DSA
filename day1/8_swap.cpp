// Problem : swap two numbers with the help of the third variable.
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int num1, num2, temp;
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;

    cout << "Before swapping swapping the number : \n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping the number : \n";
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    return 0;
}