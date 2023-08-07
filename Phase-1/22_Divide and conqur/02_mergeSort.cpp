#include<iostream>
using namespace std;

void mergeSortedArr(int arr[],int s,int e){
    int mid=(s+e)/2;
    int n1=mid-s+1;
    int n2=e-mid;

    // crate right and left part
    int * left=new int[n1];
    int * right =new int[n2];


    // copy into left array
    int orginalIndex=s;
    for (int i = 0; i < n1; i++)
    {
       left[i]=arr[orginalIndex++];
    }

    // copy into right array
    orginalIndex=mid+1;
    for (int i = 0; i < n2; i++)
    {
       right[i]=arr[orginalIndex++];
    }


    

    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(left[i]>=right[j]){
            arr[k++]=right[j++];
         
        }
        else{
            arr[k++]=left[i++];
        }
    }

    while(i<n1){
        arr[k++]=left[i++];
       
    }
    while(j<n2){
        arr[k++]=right[j++];
    }

    
}
void mergeSort(int arr[],int s,int e){

    // base case
    if(s>=e){
        return ;
    }
 int mid=(s+e)/2;
    // left case
    mergeSort(arr,s,mid);
    // right case
    mergeSort(arr,mid+1,e);

    // merge 2 sorted arrays

    mergeSortedArr(arr,s,e);
   

}


int main(){

    int arr[]={12,11,9,6,7,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}