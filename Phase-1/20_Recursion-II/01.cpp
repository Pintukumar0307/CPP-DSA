#include<iostream>
using namespace std;
int solve(int arr[],int n, int amo,int currentcoin){
    if(amo==0){
        return 1;
    }
    if (amo<0){
        return 0;
    }
       
    int way=0;
    for (int i =currentcoin; i < n; i++)
    {
        way+=solve(arr,n,amo-arr[i],i);
    }
    return way;
}


int main()
{
int arr[]={1,2};
int n=2;
int amount=4;
int ans= solve(arr,n,amount,0);
cout<<ans<<endl;
 
    return 0;
}