#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int>q;

    q.push(3);
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(11);

    cout<<"front:"<<q.front()<<endl;

    q.pop();

   cout<<"size:"<< q.size()<<endl;

   cout<<"front:"<<q.front()<<endl;

   cout<<"empty or not:"<<q.empty()<<endl;

   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
   cout<<endl;

}