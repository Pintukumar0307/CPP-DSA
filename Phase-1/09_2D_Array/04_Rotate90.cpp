#include<iostream>
using namespace std;
void transpose(int arr[3][3],int n,int m){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < i; j++)
       {
          swap(arr[i][j],arr[j][i]);
       }
      
    }
}
void rotate90(int arr[3][3],int n,int m){

  for (int i = 0; i < n; i++)
    {
      int k=m-1;
       for (int j = 0; j < k; j++)
       {
         swap(arr[i][j],arr[i][k]);
         k--;
       }
      
    }

}

int main()
{
 int arr[3][3]={{15,1,3},{4,6,8},{10,9,13}};
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

    cout<<"---- transpose -----"<<endl;
    transpose(arr,n,m);


    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<"----Rotate 90 -----"<<endl;
     rotate90(arr,n,m);
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

 
    return 0;
}