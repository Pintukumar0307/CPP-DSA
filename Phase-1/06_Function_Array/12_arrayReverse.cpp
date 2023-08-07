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
  cout<<"Array after Reverse is ";
  for (int i = n-1; i >=0; i--)
  {
    //   int temp=arr[i];
    //   arr[i]=arr[i+1];
    //   cout<<arr[i]<<" ";
    cout<<arr[i]<<" ";
  }



  
 
    return 0;
}