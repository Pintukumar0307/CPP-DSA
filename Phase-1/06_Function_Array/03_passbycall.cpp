#include<iostream>
using namespace std;


void printnumber(int num){
    num = 10;
    cout<<"print number :"<<num<<endl;
}

int main()
{
  int num =5;

  printnumber(num);

  cout<<"print number :"<<num<<endl;
 
    return 0;
}