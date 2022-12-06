// Problem : Write a menu driven C++ program to do following operation on two dimensional array A  and B of size 2 * 3. You should add the both the matrix of array .

// The options are:

// To initialize the input elements into matrix of size 2X3
// Add both A and B matrix elements the following result should be stored in C matrix array.
// To display added elements of C matrix array.

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int A[2][3] = {3, 3, 3, 3, 3, 3};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "The addition of A and B matirx is :\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}