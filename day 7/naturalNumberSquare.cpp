// Problem : Write a function to print squares of the first 5 natural numbers.

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << (i * i) << " ";
    }
    return 0;
}