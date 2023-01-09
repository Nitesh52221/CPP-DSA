//Problem : Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
#include<iostream>
using namespace std;
int main()
{
    //write your code here 
    int n ;
     int power = 1 , binarySum= 0 , parityDigit ;  
    int sum = 0 ;
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++)
        {
            if(i%2 == 0 )
            {
                sum-=i;
            }
            else{
                sum+=i;
            }
        }
    

    // convert in binary
   
    while(n>0)
    {
         parityDigit = sum %2 ;
        binarySum +=  parityDigit*power;
        power*=10 ;
        sum /= 2 ;
    }
    cout<<"sum in Decimal : " << sum << endl ;
    cout<<"sum in Binary : " << binarySum << endl ;

    
    return 0;
}