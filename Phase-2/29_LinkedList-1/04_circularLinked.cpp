#include<iostream>
using namespace std;

class Node{

      // data members
       public:
       int data;
       Node* next;
       Node* prev;
       
       // constructor
       Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
       }

       
};

void insertAtHead(Node* &head,int d){
        
       }
void traverse(Node* head){
   

}
void insertAtTail(Node* &tail,int d){
    
}

int main(){

  Node* first =new Node(3);
  Node* head=first;
  Node* tail=first;


    return 0;
}