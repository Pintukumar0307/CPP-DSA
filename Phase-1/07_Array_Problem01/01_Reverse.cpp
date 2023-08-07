#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
   
   int i=0;
   int j=n-1;
   while (i<j)
   {
      swap(arr[i],arr[j]);
      i++;
      j--;
   }
//    for (int i = 0; i < j; i++)
//    {
//             swap(arr[i],arr[j]);
//             j--;
//    }

   

}

int main()
{
 int arr[7]={7,3,5,6,64,3,2};
reverseArray(arr,7);
for (int i = 0; i < 7; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

 
    return 0;
}