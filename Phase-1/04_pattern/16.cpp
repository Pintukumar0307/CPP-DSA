/*
A 
A B A
A B C B A
A B C D C B A
A B C D E D C B A
A B C D E F E D C B A

*/

#include<iostream>
using namespace std;

int main()
{
  int n=5;

      for (int i = 65; i <=65+n; i++)
      {

          
            for (int j = 65; j <= ((2*i-1)/2)+1; j++)
            {

               cout<<char(j)<<" ";
            }
            for (int j = (2*i-1)/2; j >=65; j--)
            {
               cout<<char(j)<<" ";
               
            }
            
          
          cout<<endl;
      } 
 
         
      
 
    return 0;
}