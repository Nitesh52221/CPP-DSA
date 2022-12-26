//Problem : WAP to print the rectangular pattern 
// e.g : 

// *******
// *******
// *******

#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int m , n ; 
    cin >> m >> n ;

    // printing Rows 
    for( int i = 0 ; i < m ; i++)
    {
        // printing col 
        for(int j = 0 ; j < n ; j++)
        {
            cout<<" * ";
        }

        cout<< endl ;
    }


    return 0;
}