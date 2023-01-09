//Problem : Convert the Binary number to Decimal 
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int num ; 
    cin >> num ; 
    int power= 1 , decimalNumber= 0 , digit;

    while(num>0)
    {
        digit = num%10;
        decimalNumber +=digit*power;
        power*=2;
        num /= 10;
    }
    
    cout<<decimalNumber;
    return 0;
}
