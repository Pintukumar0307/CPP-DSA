#include<iostream>
using namespace std;

int main()
{
  int arr[100];
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  cout<<"array is : ";
  for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;

 for ( int j = 0; j < n-1; j++) 
  {
      for (int i = 0; i < n-1-j; i++)
      {
         
      
     if (arr[i]>arr[i+1])
     {
         int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
     }
       }
  }
   for (int i = 0; i < n; i++)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
    cout<<"Max no is: "<<arr[n-1]<<endl;
      cout<<"Min no is: "<<arr[0]<<endl;
//   for (int i = 0; i < n; i++)
//   {
//       cout<<"Max no is: "<<arr[n-1]<<endl;
//       cout<<"Min no is: "<<arr[0]<<endl;
//   }
  


  
 
    return 0;
}