#include <iostream>
using namespace std;


int main()
{
   int arr[]={1,2,3};
   
   cout<<arr<<endl;
   cout<<&arr[0]<<endl;
   cout<<&arr<<endl;

   int arr1[]={1,2,3,4,5};

   cout<<*arr1<<endl;
   cout<<*(arr1+1)<<endl;
   cout<<*(arr1+2)<<endl;
   cout<<*(arr1+3)<<endl;
   cout<<*(arr1+4)<<endl;

   int i=2;
   cout<<i[arr1]<<endl;
   

    return 0;
}