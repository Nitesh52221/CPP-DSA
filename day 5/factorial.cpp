//Problem : print the first n factorial 
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n;
    cin>>n;
    
    int fact = 1;
    for(int i = 1 ; i <=n ; i++)
    {
        fact *=i;
        cout<<fact<<endl;
    }
    return 0;
}