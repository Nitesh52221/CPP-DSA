// Problem : Write a C++ program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

// Input:
// 375

// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00

#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int amt, total;
    cin >> amt;

    // Notes of 100
    total = amt / 100;
    amt = amt - (total * 100);
    cout << total << " * " << 100 << " = " << (total * 100) << endl;
    // Notes of 50
    total = amt / 50;
    amt = amt - (total * 50);
    cout << total << " * " << 50 << " = " << (total * 50) << endl;

    // Notes of 20
    total = amt / 20;
    amt = amt - (total * 20);
    cout << total << " * " << 20 << " = " << (total * 20) << endl;
    // Notes of 10
    total = amt / 10;
    amt = amt - (total * 10);
    cout << total << " * " << 10 << " = " << (total * 10) << endl;
    // Notes of 5
    total = amt / 5;
    amt = amt - (total * 5);
    cout << total << " * " << 5 << " = " << (total * 5) << endl;
    return 0;
}