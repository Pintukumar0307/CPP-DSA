#include<iostream>
using namespace std;
void facb(int n){
 int first=0;
 int second =1;
 int sum;
 cout<<first<<" "<<second<<" ";
 for (int i = 0; i < n-2; i++)
 {
    sum=first+second;
    cout<<sum<<" ";
    first=second;
    second=sum;

 }
 
}

int main()
{

facb(10);
 
    return 0;
}