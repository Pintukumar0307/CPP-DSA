#include<iostream>
using namespace std;

void even(int n){
    for (int i = 2; i <= n; i=i+2)
    {
     cout<<i<<endl;
     
       
    }
    
}

int main()
{
  int n=15;
  even(n);
 
    return 0;
}
