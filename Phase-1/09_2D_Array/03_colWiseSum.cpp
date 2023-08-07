#include<iostream>
using namespace std;

// void colWiseSum(int arr[3][3],int n,int m){
//     // int sum1=0;
//     // int sum2=0;
//     // int sum3=0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //    for (int j = 0; j < m; j++)
//     //    {
//     //        if (j==0)
//     //        {
//     //             sum1=sum1+arr[i][j];
//     //        }
//     //        if (j==1)
//     //        {
//     //              sum2=sum2+arr[i][j];
//     //        }
//     //        if (j==2)
//     //        {
//     //             sum3=sum3+arr[i][j];
//     //        }
           
         
//     //    }
          
//     //    }
//     //    cout<<sum1<<endl;
//     //    cout<<sum2<<endl;
//     //    cout<<sum3<<endl;

       
//     //   int ans=INT_MIN;
//     //   ans=max(ans,sum1);
//     //   ans=max(ans,sum2);
//     //   ans=max(ans,sum3);
//     //   cout<<"max sum is "<<ans<<endl;
//    cout<<"col sum is " ;  
//   int ans=INT_MIN;    
// for (int i = 0; i < m; i++)
//     {
//         int sum=0;
//        for (int j = 0; j < n; j++)
//        {
//           sum=sum+arr[j][i];
//        }
//        cout<<sum<<" ";
//        ans= max(ans,sum);
       
//     }
//     cout<<endl;
//     cout<<"max col sum "<<ans<<endl;

      
      
      
// }

void colWiseSum(int arr[3][3],int n,int m){
   int ans[10]={0};
   
   cout<< "col sum is: ";
   for (int j = 0; j < m; j++)
   {
     for (int i = 0; i < n; i++)
     {
      ans[j]+=arr[i][j];
     }
     cout<<ans[j]<<" ";
   }
   
}

int main()
{
 int arr[3][3]={{5,1,3},{4,6,8},{10,9,13}};
  int x=13;
  int n=3,m=3;
  

  for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    colWiseSum(arr,n,m);
 
    return 0;
}