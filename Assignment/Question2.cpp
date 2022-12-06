// Problem : Write a C++ program to convert specified days into years, weeks and days. Note: Ignore leap year.

// Input :
// Number of days : 1329

// Expected Output :
// Years: 3 Weeks: 33 Days: 3

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int days, weeks, years;
    days = 1329;

    // Converts days to years, weeks and days
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    cout << "year:" << years << ", weeks:" << weeks << ", days:" << days;

    return 0;
}