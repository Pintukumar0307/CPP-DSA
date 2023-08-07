#include<iostream>
using namespace std;

int main()
{
   int arr[]={-2,-3,4,-1,-2,1,5,-3};
   int sum=0;
   int ans=INT_MIN;

   for (int i = 0; i < 8; i++)
   {
      sum=sum+arr[i];
     ans= max(ans,sum);

     if (sum<0){
         sum=0;
     }
     
   }
   cout<<ans;
   
    return 0;
}