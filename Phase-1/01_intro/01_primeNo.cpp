#include<iostream>
using namespace std;

int main()
{
   int n, hello =0 ;
   cin>>n;

   for (int i = 2; i < n; i++)
   {
       if (n%i==0)
       {
            // cout<<i<<endl;
            hello =1;
            break;
       }

      
   }
   if (hello==0)
   {
       cout<< "number is prime no"<<endl;
   }
   else{
       cout<< "number is not prime no"<<endl;
   }
   
 
    return 0;
}