//Problem : print the sum of the digits
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n;
    cin>>n;

    int digit , sum = 0;
    while(n>0)
    {
        
        digit = n%10;   //extracting digit
        sum+=digit;     //calc sum
        n/=10;          
    }
    cout<<sum;
    return 0;
}