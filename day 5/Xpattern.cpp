//Problem : Write a program to print the cross pattern given below (in the shape of X):

#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ;  
    cin >> n ;
    // Approach 1  
    // for(int i = 1; i<=n ; i++)
    // {
    //     for(int j =1 ; j <= n ; j++)
    //     {
    //         if(i == j || j ==n+1-i )
    //         {
    //             cout<< "*";
    //         }
            
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Approach 2 
    for(int i = 1; i<=n ; i++)
    {
        for(int j =1 ; j <= n ; j++)
        {
            if(i == j || i+j == n+1 )
            {
                cout<< "*";
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}