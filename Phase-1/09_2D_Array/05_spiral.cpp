#include<iostream>
using namespace std;

void spiral(int arr[5][5],int n,int m){
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //        cout<<arr[i][j]<<" ";
    //     }
        
    // }
    int sR=0,eR=m-1;
    int sC=0,eC=n-1;
    int t=n/2;
    while(sR<t){

        for (int i= sC; i <=eC; i++)
        {
           cout<<arr[sR][i]<<" ";
        }
        sR++;
       for (int i= sR; i <=eR; i++)
        {
           cout<<arr[i][eC]<<" ";
        } 
        eC--;
        for (int i= eC; i >=sC; i--)
        {
           cout<<arr[eR][i]<<" ";
        } 
        eR--;
        for (int i= eR; i >=sR; i--)
        {
           cout<<arr[i][sC]<<" ";
        } 
        sC++;

   t++;
    }
    
     
}

int main()
{
// int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int arr[5][5]={{1,2,3,4,17},{5,6,7,8,18},{9,10,11,12,19},{13,14,15,16,20},{21,22,23,24,25}};
  int x=13;
  int n=5,m=5;

  for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }

    
    spiral(arr,n,m);


    
 
    return 0;
}