// Problem : unary operators
//   + , - , ++ , -- , !
#include <iostream>
using namespace std;
int main()
{
    // write your code here
    int x = 5;
    cout << (x++); // 5 , print first then update
    int y = 10;
    cout << (++y); // 11 , update first then print
    return 0;
}
