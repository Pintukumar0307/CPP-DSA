#include<iostream>
using namespace std;
void fun(int *arr,int n){

   cout<<sizeof(arr);
}

int main()
{
 int arr[]={1,2,3,4,5};
 
 fun(arr,5);

 
    return 0;
}