#include<iostream>
using namespace std;

int getMaxSubarraySum(int arr[],int n){
  int maxSF=INT_MIN;
  int maxEH=0;

for (int i = 0; i < n; i++)
{
    // include curent element
      maxEH=maxEH+arr[i];

    // upadte the ans

    // maxSF=max(maxSF,maxEH);
    if (maxEH>maxSF)
    {
      maxSF=maxEH;
    }
    
    // if max ending here is 0,them dont include
    if (maxEH<0)
    {
      maxEH=0;
    }
   
}
return maxSF;
  
}

int main()
{
        int arr[]={-2,-3,4,-1,-2,1,5,-3};
        
    //  int arr[]={-2,-3,-4,-1,-2,-1,-5,-3};
   
    cout<< getMaxSubarraySum(arr,8);

 
    return 0;
}