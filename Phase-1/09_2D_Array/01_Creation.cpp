#include<iostream>
using namespace std;

int main()
{
      // creation
      
    // int arr[10][10];
// initialise first element with 0 and 1

    // int arr[10][10] = {1};

// initialise 2d array like 1d array

    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};

// initialise 2d array row/col wise

    // int arr[4][2] = {{1,2},{2,3},{3,4},{4,5},};

     int arr[4][2] = {{1},{2,3},{3,4},{4,5},};
    
    // initialise 2d array like 1d array
    int n=4;
    int m=2;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //       cin>>arr[i][j];
    //    }
      
    // }

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