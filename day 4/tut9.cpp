//Problem : WAP to print the pattern like this

//  1 2 1 2 1 2
//  2 1 2 1 2 1 
//  1 2 1 2 1 2
//  2 1 2 1 2 1 

#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ;
     cin>>n;
    
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if((i+j)%2 == 0)
            {
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }

    return 0;
}