//Problem :  Write a program to print all Armstrong numbers between 100 to 500.
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    for(int i = 0 ; i < 500 ; i++)
    {

    
        int n =i, sum = 0;
        int temp = n ;

        while(n!=0)
        {
            int rem= n %10 ;
            sum = sum+(rem*rem*rem);
            n /=10;
        }
        if(temp == sum){
            cout<<temp<<endl;
        }
       

    }
    return 0;
}