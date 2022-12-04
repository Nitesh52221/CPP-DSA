// Problem : Write a program to calculate the sum of the first and the second last digit of a 5 digit number.
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int num = 50000;
    int last = num % 10;
    int first = num / 10000;

    cout << first + last << endl;

    return 0;
}