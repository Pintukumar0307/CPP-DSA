/*

1 
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/



#include<iostream>
using namespace std;

int main()
{
  int n=5;

      for (int i = 1; i <=n; i++)
      {

          
            for (int j = 1; j <= ((2*i-1)/2)+1; j++)
            {
               cout<<j<<" ";
            }
            for (int j = (2*i-1)/2; j >=1; j--)
            {
               cout<<j<<" ";
               
            }
            
          
          

            
              
          
          cout<<endl;
      } 
 
    return 0;
}