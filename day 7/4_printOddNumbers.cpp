// Problem : Given two numbers a and b, write a program using functions to print all the odd numbers between them.
#include <iostream>
using namespace std;
void AllOddNumber(int a, int b)
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
};
int main()
{
    // write your code here
    int a = 1, b = 10;
    AllOddNumber(a, b);
    return 0;
}