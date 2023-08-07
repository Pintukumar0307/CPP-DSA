#include<iostream>
using namespace std;

int main()
{
   int i=5;
   int &j=i;
    cout<<i<<endl;
    j++;
   cout<<j<<endl;


//    int* ptr= new int;
   int n;
   cin>>n;
   int* arr =new int[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   
   



 
    return 0;
}