#include<iostream>
using namespace std;

int main()
{
  int arr[]={3,4,5,6,7,8};
//   for (int i = 0; i < 6; i=i+2)
//   {
//       if (i+1<6)
//       {
//          swap(arr[i],arr[i+1]);

//       }
     
//   }
for (int i = 0; i < 6; i++)
{
    swap(arr[i],arr[i+1]);
    i++;
}

  for (int i = 0; i < 6; i++)
  {
      cout<<arr[i]<<" ";
  }
  
 
    return 0;
}