#include<iostream>
using namespace std;


bool binarySearch(int arr[][3],int n, int m,int row, int x){
int s=0;
int e=m-1;
int mid =s+(e-s)/2;

while (s<=e)
{
  
    if(arr[row][mid]==x){
        
        cout<<row<<","<<mid<<endl;
        return true;
    }
    if (arr[row][mid]<x)
    {
        s=mid+1;
    }
    else{
        e=mid-1;
    }
   mid =s+(e-s)/2; 

}
return false;


}


bool search(int arr[][3],int n, int m, int x){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        // compare with starting element of coloumn
       if (arr[mid][0]==x){
           cout<<mid<<","<<0<<endl;
           return true;
       }
       
       // compare with ending element of coloumn
       if (arr[mid][m-1]==x){
           cout<<mid<<","<<m-1<<endl;
           
          return true;
       }

       // compare with target between  starting and ending element of coloumn
       if (arr[mid][0]<x && x<arr[mid][m-1]){
           // applying binary search on columns
            int ans =binarySearch(arr,n,m,mid,x);
            return ans; 
       }

       // check upper
       if (x<arr[mid][0]){
         e=mid-1;
       }
       if (x>arr[mid][m-1]){
           s=mid+1;
       }
        mid = s+(e-s)/2;
    }

    return false;
}

int main()
{
    int arr[3][3]={1,5,9,14,20,23,30,34,43};

    int m=3,n=3,target=34;
    // cout<<search(arr,n,m,target);
    search(arr,n,m,target);
 
    return 0; 
}