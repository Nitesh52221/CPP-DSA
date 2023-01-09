//Problem : convert decimal to binary
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int num, power=1 , binaryNumber = 0 , parityDigit; 
    cin>>num;
    while(num>0)
    {
        parityDigit = num%2 ; 
        binaryNumber += parityDigit*power;
        power *= 10;
        num /= 2;
    }
    cout<<binaryNumber ;
    

    return 0;
}