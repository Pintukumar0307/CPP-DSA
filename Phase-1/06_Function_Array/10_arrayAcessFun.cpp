#include<iostream>
using namespace std;

void printArray(int arr[],int size){
for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void xyz(int arr[], int size)
{

    arr[0]=23;
    printArray(arr,5);
    cout<<endl;
}

int main()
{
  int arr[5] ={1,2,3,4,5};
   xyz(arr,5);

  cout <<"In main fun"<<endl;

  printArray(arr,5);

 
    return 0;
}