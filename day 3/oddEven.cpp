// Problem : WAP to check the given number is odd or even
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    cout << "Odd-Even Program" << endl;
    int num;
    // Taking Input
    cin >> num;

    // checking for odd or even
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}