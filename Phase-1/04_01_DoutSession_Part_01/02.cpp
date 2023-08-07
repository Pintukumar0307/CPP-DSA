#include<iostream>
using namespace std;
# include<math.h>

int main()
{
 int n=10;
//  n=n>>3;
 int i=0;
 int ans=0;
//  while (n!=0)
//  {
//     int digit=n%2;
//     // cout<<digit;
//     n=n/2;
//     ans =(digit*pow(10,i))+ans;
//     i++;
//  }

while (n!=0)
{
    int bit = n &1;
    ans =(bit*pow(10,i))+ans;
    // cout<<bit;
    n=n>>1;
    i++;
}

  cout <<ans<<endl; 
 
 
    return 0;
}