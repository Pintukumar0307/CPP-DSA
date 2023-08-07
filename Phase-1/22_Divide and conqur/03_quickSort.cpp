#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];

    // count smaller elements of pivot
    int count=0;
    for(int i=s+1;i<=e;i++){

        if (arr[i]<pivot)
        {
            count++;
        }
        
    }
    int pivotIndex=s+count;

        swap(arr[s],arr[pivotIndex]);

        // handle left and right of pivot 
        // all smaller elemtent of pivot are in left
        // and other in right
        int i=s,j=e;

        while(i<pivotIndex && j>pivotIndex){
            while (arr[i]<=pivot)
            {
              i++;
            }
            while (arr[j]>pivot)
            {
                j--;
            }

            if (i<pivotIndex && j>pivotIndex)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            
        }
        return pivotIndex;

}


void quickSort(int arr[],int s,int e){

    // base case
    if(s>=e){
        return ;
    }
    int pIndex=partition(arr,s,e);

    // left case
   quickSort(arr,s,pIndex-1);
    // right case
    quickSort(arr,pIndex+1,e);

}


int main(){

    int arr[]={12,11,9,7,7,5,7,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}