#include<iostream>
using namespace std;
#include <algorithm>

int binarySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    // int mid=start+(end-start)/2;

    while (start<=end)
    {
        // int midElement=arr[mid];
        int mid=start+(end-start)/2; 
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid]<x)
        {
            start= mid+1;
        }
        else{
            end= mid-1;
        }
       
    }
    return -1;
   
}

int main()
{
  int arr[]={3,4,7,9,11,25,26};
  int x=5;

 cout<<binarySearch(arr,7,x); 

//  cout<<binary_search(arr,arr+7,x);

 
    return 0;
}