#include<iostream>
using namespace std;

void count(int n){
    if (n<1)
    {
       return ;
    }
    // cout<<n<<" ";

    count(n-1);
    cout<<n<<" ";  
    
}

int main()
{
int n;
cout<<" Enter the value of n"<<endl;
cin>>n;

cout<<"counting of n is "<<endl;
count(n);

    return 0;
}