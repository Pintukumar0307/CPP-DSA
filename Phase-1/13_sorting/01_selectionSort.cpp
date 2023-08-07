#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
   
  for (int i = 0; i < n; i++)
  {
     int minIndex=i;

     for ( int j = i+1; j < n; j++)
     {
         if (arr[minIndex]>arr[j])
         {
            minIndex=j;
         }
        
         
     }
     swap(arr[i],arr[minIndex]);
     //  swap(int arr);
  }
  

}

int main()
{
   int arr[]={3,2,4,1,7};

   selectionSort( arr ,5);
   
   for (int i = 0; i < 5; i++)
   {
      cout<<arr[i]<<" ";
   }
   
    return 0;
}