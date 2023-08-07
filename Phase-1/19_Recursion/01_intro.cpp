#include<iostream>
using namespace std;

int factorail(int n){
    if (n==1||n==0)
    {
       return 1;
    }
    cout<<n<<endl;
    // int smallerProblem=factorail(n-1);
    // int ans=n*smallerProblem;
    return n*factorail(n-1);
    // return ans;
   
}

int main()
{
int n;
cout<<" Enter the value of n"<<endl;
cin>>n;
cout<<"Factorial of n is " <<factorail(n)<<endl;

return 0;
}