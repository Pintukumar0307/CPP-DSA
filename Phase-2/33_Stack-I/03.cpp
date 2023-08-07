#include<iostream>
#include<stack>

using namespace std;

int main(){
   // creation
    stack<int>st;

   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
   }
   for(int i=0;i<n;i++){
    cout<<st.top()<<" ";
    st.pop();
   }

   cout<<endl;

}