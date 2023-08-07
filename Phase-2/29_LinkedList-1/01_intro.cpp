#include<iostream>
using namespace std;

class Node{
       public:
       int data;
       Node* next;

    //    Node(int data){
    //     this->data=data;
    //     this->next=NULL;
    //    }
    //    Node(int data,Node* next){
    //     this->data=data;
    //     this->next=next;
    //    }

};

int main(){

  Node* first =new Node();
  Node* second =new Node();
  Node* third =new Node();
  first->data=3;
  first->next=second;
  second->data=5;
  second->next=third;
  third->data=7;
  third->next=NULL;


  cout<<first->data<<" | "<<first->next<<" ---> "<<endl;
  cout<<second->data<<" | "<<second->next<<" ---> "<<endl;
  cout<<third->data<<" | "<<third->next<<endl;

 

  
  
    return 0;
}