#include<iostream>
using namespace std;


int main(){

    int arr1[5]={3,5,7,9,11};
    int arr2[3]={2,4,6};
    int arr[100];
    int i=0,j=0,k=0;
   

    while(i<5 && j<3){
        if(arr1[i]>=arr2[j]){
            arr[k++]=arr2[j];
            j++;
        }
        else{
            arr[k++]=arr1[i];
            i++;
        }
    }

    while(i<5){
        arr[k++]=arr1[i];
        i++;
    }
    while(j<3){
        arr[k++]=arr2[j];
        j++;
    }


    int n= sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}