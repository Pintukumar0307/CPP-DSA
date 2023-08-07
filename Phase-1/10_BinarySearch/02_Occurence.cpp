#include<iostream>
using namespace std;
int binarySearch1(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        int midElement=arr[mid];
        if (midElement == x)
        {
             ans=mid;
            start=mid+1;

           
        }
        else if (midElement<x)
        {
            start= mid+1;
        }
        else{
            end= mid-1;
        }
        
        
       mid=start+(end-start)/2; 
    }
     return ans;
    

}

 int binarySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while (start<=end)
    {
        int midElement=arr[mid];
        if (midElement == x)
        {
             ans=mid;
            end=mid-1;

           
        }
        else if (midElement<x)
        {
            start= mid+1;
        }
        else{
            end= mid-1;
        }
        
        
       mid=start+(end-start)/2; 
    }
     return ans;
    

}

int main()
{
 int arr[] = {5,5,5,5,5,8,12};
 int x=5;
 cout <<"1st occurrence index: "<<binarySearch(arr,7,x)<<endl; 
 cout <<"last occurrence index: "<<binarySearch1(arr,7,x)<<endl; 
 cout <<"total occurrence: " <<binarySearch1(arr,7,x)-binarySearch(arr,7,x)+1<<endl;
    return 0;
}