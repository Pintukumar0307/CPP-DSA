#include<iostream>
#include<stack>

using namespace std;

int main(){
   // creation
    stack<int>st;

   //insertion
   
    st.push(5);
    st.push(9);
    st.push(11);

    // empty
    cout<<st.empty()<<endl;
    // size
    cout<<st.size()<<endl;

    // top
    cout<<st.top()<<endl;

    //remove
    st.pop();

    // top
    cout<<st.top()<<endl;

}