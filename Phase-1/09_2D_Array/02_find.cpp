#include<iostream>
using namespace std;
bool search(int arr[3][3],int n,int m,int x){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          if (arr[i][j]==13)
          {
             return true;
          }
          
          }
          
       }
       return false;
    
     
    }
    



int main()
{
  int arr[3][3]={{5,1,3},{4,6,8},{10,9,13}};
  int x=13;
  int n=3,m=3;
  

  for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    cout<<"searching of "<<x <<"-> "<< search(arr,n,m,x)<<endl;
    
    return 0;
}