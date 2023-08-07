#include<iostream>
using namespace std;

int main()
{
  int a=5;
  int* p=&a;
  int** q=&p;
  int*** r =&q;
  int**** s=&r;

  cout<<a<<endl;
  cout<<p<<endl;
  cout<<q<<endl;
  cout<<r<<endl;


  cout<<**q<<endl;

 
    return 0;
}