#include<iostream>
using namespace std;

int getMaxFromArray(int arr[],int n){
 int ans = INT_MIN;
 for (int i = 0; i < n; i++)
 {
    ans= max(ans,arr[i]);
    
 }
 return ans;
 }

//  int  getMinFromArray (int arr[],int n){
//      int ans =INT_MAX;
// for (int i = 0; i < n; i++)
//  {
//     ans= min(ans,arr[i]);
    
//  }
//  return ans;

//  }
int getMinFromArray(int arr[],int n){
   int ans=INT_MAX;
   for (int i = 0; i < n; i++)
   {
     if (arr[i]<ans)
     {
      ans=arr[i];
     }
     
   }
   return ans;
   
}
 

int main()
{
 int arr[]={3,1,4,5,6,-1};

// int x= getMaxFromArray(arr,6);

 cout<<"Max No "<< getMaxFromArray(arr,6) <<endl;

int y= getMinFromArray(arr,6);

 cout<<"Max No "<< y <<endl;


 
    return 0;
}