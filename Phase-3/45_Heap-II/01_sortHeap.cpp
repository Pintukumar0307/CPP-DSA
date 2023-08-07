#include<iostream>
using namespace std;

void heapify(int arr[],int n,int index){

            int largest=index;
            int left=2*index;
            int right=2*index+1;

            if(left<=n && arr[left]>arr[largest]){
                largest=left;
            }
            if(right<=n && arr[right]>arr[largest]){
                largest=right;
            }
            if(largest!=index){
                swap(arr[largest],arr[index]);
                heapify(arr,n,largest);
            }
        
    }
void HeapSort(int arr[],int n){

  for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }
    while (n>1)
    {
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
    

}

int main(){


    int arr[]={-1,2,6,8,3,7};
    int n=5;
   
   HeapSort(arr,n); 
   cout<<"HeapSort"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}