//Problem : Reverse the digit of number 
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ; 
    cin>>n;
    int digit = 0 , reverse = 0 ;
    while(n>0)
    {
        digit = n%10;
        reverse = reverse*10 + digit;
        n/=10;

    }
    cout<<reverse;

    return 0;
}