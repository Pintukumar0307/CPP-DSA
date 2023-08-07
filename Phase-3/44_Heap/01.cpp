#include<iostream>
using namespace std;

class heap{
    public:
       int arr[250];
       int size=0;
       heap(){
       }
    
    void insert(int val){
        size=size+1;
        int index=size;
        // insert val
         arr[index]=val;
         while(index>1){
          // take value to right place
          int parentIndex=index/2;
          if(arr[parentIndex]<arr[index]){
            swap(arr[parentIndex],arr[index]);
            index=parentIndex;
          }
          else{
            break;
          }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Heap already empty"<<endl;
        }
        // swaap arr[1] with arr[size]
        swap(arr[1],arr[size]);
        size--;

        // delete and swap
        int index=1;
        while(index<=size){
            int largest=index;
            int left=2*index;
            int right=2*index+1;

            if(left<=size && arr[left]>arr[largest]){
                largest=left;
            }
            if(right<=size && arr[right]>arr[largest]){
                largest=right;
            }
            if(largest!=index){
                swap(arr[largest],arr[index]);
                index=largest;
            }
            else{
                break;
            }
        }

    }
};

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

}

int main(){


    int arr[]={-1,2,6,8,3,7};

    int n=5;
    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }

    cout<<"Printing after building heap..."<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    

//     heap maxHeap;

//     maxHeap.insert(2);
//     maxHeap.insert(6);
//     maxHeap.insert(8);
//     maxHeap.insert(3);
//     maxHeap.insert(7);
//     maxHeap.insert(9);
//     maxHeap.insert(11);
    

//     maxHeap.print();


//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();

//     maxHeap.deleteFromHeap();
//     maxHeap.print();


}