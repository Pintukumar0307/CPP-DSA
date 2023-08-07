// maximum sum
#include<iostream>
using namespace std;

 //------ brute force 1-------------

// int getMaxSubarraySum(int arr[],int n){

// int maxSum=0;;
// for (int i = 0; i < n; i++)
// {
//     int sum=0;
//     for (int  j = i; j < n; j++)
//     {
//        sum= sum+arr[j];
//        if (sum>maxSum)
//        {
//          maxSum=sum;
//        }
       
//     }
    
   
// }
// return maxSum;
  
// }

// brute force 2
int getMaxSubarraySum(int arr[],int n){

int maxSum=0;

for (int i = 0; i < n; i++)
{
    
    for (int  j = i+1; j < n; j++)
    {
          int sum=0;
         for (int k = i; k < j; k++)
         {
            sum=sum+arr[k];

            if (sum>maxSum)
            {
               maxSum=sum;
            }
            
          }
       
       
    }
    
   
}
return maxSum;
  
}

int main()
{
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
   
    cout<< getMaxSubarraySum(arr,8);
 
    return 0;
}