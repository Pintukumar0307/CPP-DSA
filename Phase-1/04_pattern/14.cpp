/*

    1 
   1 2
  1   3
 1     4
1 2 3 4 5

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
            for (int j = 0; j < n-i-1; j++)
            {
               cout<<" ";
            }
            for (int j = 0; j < i+1; j++)
            {
               cout<<j+1<<" ";
            }
            
          }
          else{

             for (int j = 0; j < n-i-1; j++)
            {
               cout<<" ";
            }
               cout<<"1";

              for (int j = 0; j < 2*i-1; j++)
              {
                 cout<<" ";
              }
              for (int j = 0; j < 1; j++)
              {
                 cout<<i+1;
              }
              
          }
          cout<<endl;
      } 
 
    return 0;
}