#include<iostream>
#include <queue>
using namespace std;



int main(){
// max heap
priority_queue<int>q;

q.push(1);
q.push(2);
q.push(4);
q.push(5);
q.push(5);
q.push(3);

cout<<q.top()<<endl;
q.pop();
cout<<q.top()<<endl;
q.pop();
cout<<q.top()<<endl;

// min heap
priority_queue<int,vector<int>,greater<int>>minheap;
minheap.push(1);
minheap.push(2);
minheap.push(4);
minheap.push(5);
minheap.push(5);
minheap.push(3);

cout<<minheap.top()<<endl;
minheap.pop();
cout<<minheap.top()<<endl;
minheap.pop();
cout<<minheap.top()<<endl;
   


}