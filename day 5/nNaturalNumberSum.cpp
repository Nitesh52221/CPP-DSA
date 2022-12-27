//Problem : - Write a program to find the sum of n natural numbers.
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n;
    cin >> n ; 
    int sum = 0 ; 
    sum = (n*(n+1))/2;
    cout<<sum;
    return 0;
}