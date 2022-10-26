// Problem : Logical Operators
//   &&(Logical And) : Both true
//   ||(Logical Or) : any one woulde be true
//   !(Logical Not) : oposite result and vice-versa
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int x = 10, y = 20, z = 30;

    // Logical And
    cout << "Logical And" << endl;
    cout << ((x > y) && (z > x)) << endl; // ((false) && (true)) = false
    cout << ((x < y) && (y < z)) << endl; // (true && true) = true

    cout << "Logical Or" << endl;
    cout << ((x > y) || (z > x)) << endl; // (false || true) = true
    cout << ((x < y) || (y < z)) << endl; // (true || true) = true
    cout << ((x > y) || (y > z)) << endl; // (false || false) = false

    cout << "Logical Not" << endl;
    cout << !(x > y) << endl; // !false = true
    cout << !(x < y) << endl; // !true = false

    return 0;
}