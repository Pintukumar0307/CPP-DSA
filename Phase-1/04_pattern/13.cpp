/*

1 2 3 4 5 
1     4
1   3
1 2
1

*/


#include<iostream>
using namespace std;

int main()
{
    int n=5;

      for (int i = 0; i < n; i++)
      {
          if (i==0||i==n-1)
          {
            for (int j = 0; j < n-i; j++)
            {
               cout<<j+1<<" ";
            }
            
          }
          else{
               cout<<"1";

              for (int j = 0; j < n-2*i+2; j++)
              {
                 cout<<" ";
              }
              for (int j = 0; j < 1; j++)
              {
                 cout<<n-i;
              }
              
          }
          cout<<endl;
      }
 
    return 0;
}