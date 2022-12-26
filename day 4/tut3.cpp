//Problem : WAP to print the triangular pattern 
// e.g : 

// *
// **
// ***
// ****

#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int m ; 
    cin >> m  ;

    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}