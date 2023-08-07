#include<iostream>
using namespace std;

void arrayPrint(int arr[],int size){
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    arr[0]=10;
    
}

int main()
{
// int arr[5] ={1,2,3,4,5};
// int arr1[10];
// int arr2[] ={1,2,3,4,5};
// int arr3[10]={1,2};
// cout<<arr3[4]<<" hello"<<endl;
// cout<<arr1[4];

int arr[5]={1,2,3,4,5};
arrayPrint(arr,5);
 for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

 
    return 0;
}