
// -> find value = index in sorted array


#include<iostream>
using namespace std;
#include <algorithm>

int binarySearch(int arr[],int n){
    int start=0;
    int end=n-1;
    // int mid=start+(end-start)/2;
     int ans =-1;
    while (start<=end)
    {
        // int midElement=arr[mid];
        int mid=start+(end-start)/2; 

        if (arr[mid] == mid)
        {
             return mid;
        }
        if (arr[mid]<mid)
        {
            start= mid+1;
        }
        if(arr[mid]>mid){
            end= mid-1;
        }
      
    }
    return ans;
   
}

int main()
{
  int arr[]={-10,-5,1,3,4,5,26};
  int x=5;

 cout<<binarySearch(arr,7); 

//  cout<<binary_search(arr,arr+7,x);

 
    return 0;
}