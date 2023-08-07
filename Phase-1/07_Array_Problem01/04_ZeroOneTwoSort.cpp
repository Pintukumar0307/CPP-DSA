#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void SortZeroOneTwo(int arr[],int n){
  
// int zero=0,one=0,two=0;
// for (int i = 0; i < n; i++)
// {
//   if (arr[i]==0)
//   {
//      zero++;

//   }
//   if (arr[i]==1)
//   {
//      one++;
      
//   }
//   if (arr[i]==2)
//   {
//      two++;
      
//   }
  
// }

// int i=0;
// while (zero--)
// {
//   arr[i]=0;
//   i++;
// }
// while (one--)
// {
//   arr[i]=1;
//   i++;
// }
// while (two--)
// {
//   arr[i]=2;
//   i++;
// }


// }

void SortZeroOneTwo(int arr[],int n){
  int zero=0,one=0,two=0;
  for (int i = 0; i < n; i++)
  {
   if(arr[i]==0){
    zero++;
   }
   if (arr[i]==1)
   {
    one++;
   }
   if (arr[i]==2)
   {
    two++;
   }
   
  }
  int i=0;
  while (zero--)
  {
    arr[i]=0;
    i++;
  }
  while (one--)
  {
    arr[i]=1;
    i++;
  }
  while (two--)
  {
    arr[i]=2;
    i++;
  }
  
}


int main()
{
//   int arr[]={8,5,3,2,5,4};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   sort(arr,arr+n);
//   for (int i = 0; i <n; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
  


int arr[]={1,0,0,1,1,2,1};
SortZeroOneTwo(arr,7);

  for (int i = 0; i <7; i++)
  {
    cout<<arr[i]<<" ";
  }



    return 0;

}