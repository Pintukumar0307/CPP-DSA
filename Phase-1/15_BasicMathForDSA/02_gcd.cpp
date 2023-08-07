#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0)
      return a;

    if(b==0)
      return b;

    while (a!=b)
    {
       if(a>b)
          a=a-b ;
       if (b>a)
          b=b-a;
    }
    return a;

    
}

int main()
{
  
 cout <<gcd(10,25)<<endl;
 
    return 0;
}