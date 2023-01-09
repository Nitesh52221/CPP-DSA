// Problem : Given the age of a person, write a function to check if the person is eligible to vote or not.
#include <iostream>
using namespace std;
bool checkEligibility(int age)
{
    if (age >= 18)
    {
        return true;
    }
    return false;
}
int main()
{
    // write your code here
    int age = 12;
    int res = checkEligibility(age);
    if (res == 0)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
    }

    return 0;
}