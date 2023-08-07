#include<iostream>
using namespace std;

int main()
{
 int n=-107;
 while(n!=0){
     int digit =n%10;

     cout<<"digit: "<<digit<<endl;
     n=n/10;
 }
 cout<<"DONE"<<endl;
 
    return 0;
}