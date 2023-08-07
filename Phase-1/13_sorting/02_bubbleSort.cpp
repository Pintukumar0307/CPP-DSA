#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
   
  for (int i = 0; i < n-1; i++)
  {
     int minIndex=i;
     for ( int j = 0; j <n-1-i; j++)
     {
         if (arr[j]>arr[j+1])
         {
            swap(arr[j],arr[j+1]);
         }
      
         
     }
     
  }
  

}

int main()
{
   int arr[]={3,2,4,1,7};

   bubbleSort( arr ,5);
   
   for (int i = 0; i < 5; i++)
   {
      cout<<arr[i]<<" ";
   }
   
    return 0;
}