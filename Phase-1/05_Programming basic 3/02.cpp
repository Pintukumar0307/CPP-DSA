#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;

   if (n<=0)
   {
       return false;
   }
    int ans=(n&(n-1));

      if (ans==0)
      {
          return true;
      }
      else{
          return false;
      }
      
 
    return 0;
}