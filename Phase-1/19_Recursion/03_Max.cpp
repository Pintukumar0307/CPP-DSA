#include<iostream>
using namespace std;

int max1(int arr[],int n){

 if (n<1)
 {
    return 1;
 }
 
    int ans=arr[n-1];
    ans = max(ans,arr[n-2]);
    max1(arr,n-1);

    return ans;

}

int main()
{
   int arr[]={4,2,6,19,21,20,12};
   
   // cout<<max1(arr,7);
   int ans=arr[0];
   for (int i = 0; i < 7; i++)
   {
      ans=max(ans,arr[i]);
   }
   
   cout<<ans<<endl;


 
    return 0;
}