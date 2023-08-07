#include<iostream>
#include<vector>
using namespace std;

int soe(int n){
   
    int count=0;

    vector<bool>prime(n+1,true);

   prime[0]=prime[1]=false;

   for (int i = 2; i < n; i++)
   {
      if (prime[i])
      {
         count++;
         cout<<i<<endl;
      }
      for (int j = i*2; j < n; j=j+i)
      {
          prime[j]=0;
      }
      
      
   }
   return count;


}

int main()
{
  int n = 30;

  cout<<"count is "<<soe(n) <<endl;
 
    return 0;
}