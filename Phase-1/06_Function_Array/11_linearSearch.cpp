#include<iostream>
using namespace std;

// void printArray(int arr[],int size){
// for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }

int linearSearch(int arr[],int size,int x){
     for (int i = 0; i < size; i++)
     {
         if (arr[i]==x)
         {
             return i;
         }
         
        // if (arr[i]==x)
        // {
        //     cout<<"index of"<<x<<" is "<<i<<endl;
        // }
        // else{
        //     cout<<x<<" is not available"<<endl;
        //     break;
        // }
     }
     
     return -1;
}

int main()
{
//   int arr[10]={9,8,6,7,5,4,3,2,11,0};
//   int x=4;

int arr[100];
cout<<"Enter the size of array"<<endl;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
// printArray( arr, n);

int x;
cout<<"enter the element"<<endl;
cin>>x;

 cout<<"index at :"<<linearSearch( arr,n,x);
  


 
    return 0;
}