#include<iostream>
using namespace std;

int expo(int n){
  if(n==0)
    return 1;
 int cp=expo(n/2);
 if(n&1)
   return cp*cp*2;
else
    return cp*cp;


}

int main()
{
 cout<<expo(10)<<endl; 
 
    return 0;
}