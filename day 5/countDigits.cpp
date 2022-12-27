//Problem : count the number of digits 
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ;
    cin>>n;
    int count = 0;
    while(n>0)
    {   count++;
        n/=10;

    }
    cout<<count;
    
    return 0;
}