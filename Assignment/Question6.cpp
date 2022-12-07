// Problem :
#include <iostream>
using namespace std;
long int fact(int n)
{
    long int f = 1, i;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main()
{
    // write your code here
    long int a, i, j;
    cout << "enter an input :";
    cin >> a;
    for (i = 0; i <= a; i++)
    {
        cout << i << " ";
        for (j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << "\n";
    }
    return 0;
}