#include<iostream>
#include<stack>
using namespace std;

void getMiddle(stack<int> st,int totalSize){
   if((totalSize/2)+1==st.size()){
   cout<<"Middle element is : "<<st.top()<<endl;
     return;
   }
   
   int topelelment=st.top();
   st.pop();
   getMiddle(st,totalSize);
   st.push(topelelment);
}

int main(){
   
   stack<int>st;
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
   }

   getMiddle(st,n);


}