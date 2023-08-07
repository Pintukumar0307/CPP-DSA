#include<iostream>
using namespace std;

void ArrayPrint(int arr[],int n){
for (int i = 0; i <n; i++)
 {
    cout<<arr[i]<<" ";  
 }
}

// bool palindorne(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while (i<j)
//     {
//        if (arr[i]==arr[j])
//        {
//        i++;
//        j--;
//        }
//        else{
//            return false;

//        }
       
      
//     }
    
//       return true;

// }
bool palindorne(int arr[],int n){
    int j=n-1;
for (int i = 0; i < j; i++)
{
    if (arr[i]==arr[j])
    {
        return true;
    }
    
}
return false;


}
// void ArrayInput(int arr[],int n){
// for (int i = 0; i <n; i++)
//  {
//     cin>>arr[i];  
//  }
// }


int main()
{
 
 int arr[]={3,4,5,5,4,3};
//  ArrayInput(arr,n);
//  cout<< palindorne(arr,n)<<endl;
 

 if ( palindorne(arr,6)==true)
 {
     cout<<" YES "<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
 

  ArrayPrint(arr,6);


 
 
    return 0;
}