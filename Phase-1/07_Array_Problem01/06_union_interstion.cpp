#include<iostream>
using namespace std;
#include<vector>

void Interstion(int arr1[],int n,int arr2[],int m){
  vector<int>v;
  int count=0;
   
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
      if (arr1[i]==arr2[j])
      {
        v.push_back(arr1[i]);
        count++;
      }
      
    }
    
   }
   for (int i = 0; i < count; i++)
   {
     cout<<v[i]<<" ";
   }
   
   

}
void Union(int arr1[],int n,int arr2[],int m){
   int i = 0, j = 0;
   int count=0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]){
          
        }
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < n)
        cout << arr1[i++] << " ";
 
    while (j < m)
        cout << arr2[j++] << " ";

   

}



int main()
{

    // int arr1[]={2,3,4,5,7,9},arr2[]={3,4,5,6,7};
    int arr1[]={2,3,4,5,7,9},arr2[]={9,11};

    Interstion(arr1,6,arr2,2);
    cout<<endl;
    Union(arr1,6,arr2,2);
    
 
    return 0;
}