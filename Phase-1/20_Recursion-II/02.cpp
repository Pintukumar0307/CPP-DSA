#include<iostream>
using namespace std;

int solve(int arr[],int i,int j){

    if (i>j)
    {
        return 0;
    }

     int choice1=arr[i]+min(solve(arr,i+2,j),solve(arr,i+1,j-1));
     int   choice2=arr[j]+min(solve(arr,i+1,j-1),solve(arr,i,j-2));

    int ans = max(choice1,choice2);
    return ans;
   
}

int main(){
    int arr[]={20,30,2,2,2,10};

    cout<<solve(arr,0,5)<<endl;

    return 0;
}