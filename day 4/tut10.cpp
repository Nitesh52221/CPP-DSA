//Problem : WAP to print the numerical triangle
//  1
//  12
//  123
//  1234
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ; 
    cin>>n;

    for(int i = 0 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}