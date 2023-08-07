#include<iostream>
using namespace std;

void Factorail(int n){
    int count=1;
for (int i = 1; i <= n; i++)
{
   count=count*i; 
}
cout<<count<<endl;


}

int main()
{

int n=25;

Factorail(n);
 
    return 0;
}