#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int element){
    if(st.empty()){
        st.push(element);
        return;
    }

    int topElement=st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(topElement);

}

void reverse(stack<int> &st){
    if (st.size()==0)
    {
        return;
    }
    
    int topElement=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,topElement);
   
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

   cout<<st.top()<<endl;

   reverse(st);

   cout<<st.top()<<endl;

}