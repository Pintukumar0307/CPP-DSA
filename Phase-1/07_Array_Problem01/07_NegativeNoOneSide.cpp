#include<iostream>
using namespace std;

int main()
{
int arr[]={-2,-3,4,-1,-2,1,5,-3};
//  int arr1[8];
//  int arr2[8];
// int y=0;
// int x=0;
// for (int i = 0; i < 8; i++)
// {
//    if (arr[i]<0)
//    {
//        arr1[y]=arr[i];
//        y++;
//    }
//    else if (arr[i]>=0){
//        arr2[x]=arr[i];
//        x++;
//    }
   
// }

// //  int arr3[8]= arr1[8]+arr2[8];
// for (int i = 0; i <y; i++)
//  {
//     cout<<arr1[i]<<" ";
//  }
//  for (int i =0; i <x; i++)
//  {
//     cout<<arr2[i]<<" ";
//  }




// int j=0;
// for (int i = 0; i < 8; i++)
// {
//    if (arr[i]<0)
//    {
//       swap(arr[i],arr[j]);
//       j++;
//    }
   
// }
int j=0;
for (int i = 0; i < 8; i++)
{
   if (arr[i]<0)  
   {
      swap(arr[i],arr[j]);
      j++;
   }
   
}



for (int i = 0; i <8; i++)
 {
    cout<<arr[i]<<" ";
 }

    return 0;
}