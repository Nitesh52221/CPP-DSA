// Problem : check the given two number entered by the user is equal or not.

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    cout << "Code start" << endl;
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << " No " << endl;
    }

    return 0;
}