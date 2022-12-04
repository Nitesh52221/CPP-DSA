// Problem : Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int a, b;
    cout << "Welcome" << endl;
    cin >> a >> b;
    if (a < 50 && a < b)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
    return 0;
}