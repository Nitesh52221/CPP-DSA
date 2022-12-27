//Problem : Write a program to print alphabet diamond pattern:
#include<iostream>
using namespace std;
int main()
{
    //write your code here
    int alphabet = 65 ; 
    int size = 5 ; 

   for(int  i = 1 ; i <= size ; i++)
    {
        // printing spaces 
        for(int j = 1  ; j <= (size-i); j++)
        {
            cout<<" ";
        }
        // printing upper triangle 
        for(int j = 1 ; j <= (2*i - 1) ; j++)
        {
            cout<<((char)(alphabet));
        }
        cout<<endl;
    }
     
    return 0;
}