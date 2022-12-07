// Problem : Write a user defined function named cross_upper_triangle() which takes a two dimensional array A, with size N rows and N columns as argument and prints the triangle of the array.

// Eg:

// * * * * *
// * * * *
// * * *
// * *
// *

// hint:
// First try to print N X N matrix of *

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

#include <iostream>
using namespace std;
void upper_half(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " * ";
        }

        cout << endl;
    }
}
int main()
{
    // write your code here
    int n = 5;
    upper_half(n);
    return 0;
}