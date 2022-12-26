//Problem : WAP to print the hollow rectangular pattern 
// e.g : 

// *******
// *     *
// *     *
// *******

#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int m , n ; 
    cin >> m >> n ;

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if( i == 0 || i == m-1 || j == 0 || j == n-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}