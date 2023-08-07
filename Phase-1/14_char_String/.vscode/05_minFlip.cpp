#include<iostream>
using namespace std;

int minFilp(string a,char exp){

   int count =0; 
   
  
}

int main()
{
  string a = "0010";
  
  int ans0 = minFilp(a,'0');
   int ans1= minFilp(a,'1');

   int ans=min(ans0,ans1);
   cout <<ans<<endl;

 
    return 0;
}