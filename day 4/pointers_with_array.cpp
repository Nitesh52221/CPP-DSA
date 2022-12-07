// Problem : pointers with Array
#include <iostream>
using namespace std;

int main()
{
    // write your code here
    string fruits[5] = {"Apple", "Mango", "banana", "grapes", "Papaya"};

    // Normal printing Array values
    cout << "Fruits are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << fruits[i] << " , ";
    }
    cout << endl;
    // print using pointer
    cout << "Printing fruits using pointer : " << fruits;
    cout << "\nFruits are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(fruits + i) << " , ";
    }

    return 0;
}