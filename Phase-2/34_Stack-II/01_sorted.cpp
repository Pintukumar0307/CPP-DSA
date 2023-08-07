#include<iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int>& st, int element){
    if(st.empty() || st.top()< element){
        st.push(element);
        return;
    }
        int topElement=st.top();
        st.pop();
        insertSorted(st,element);
        st.push(topElement);
}

void sortedStack(stack<int> &st){

    // base case
    if(st.empty()){
        return;
    }

    int topElement=st.top();
    st.pop();
    
    sortedStack(st);

    insertSorted(st,topElement);

}



int main(){

    stack<int>st;
    st.push(2);
    st.push(4);
    st.push(1);
    st.push(3);

    // while (!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    sortedStack(st);

    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    



}