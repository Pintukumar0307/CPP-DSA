#include<iostream>
using namespace std;

int fact(int n){
   if (n==1 ||n==0)
   {
    return 1;
   }
   return n*fact(n-1);
   
}
int ncr(int n,int r){
    int val1=fact(n);
    int val2=fact(n-r);
    int val3=fact(r);

    return val1/(val2*val3);
    
}


int main()
{
int n=7;
 for (int i = 0; i < n; i++)
      {
          
            for (int j = 0; j < i+1; j++)
            {
               cout<<ncr(i,j)<<" ";
               
            }
           
     cout<<endl;
      }
     
 
    return 0;
}