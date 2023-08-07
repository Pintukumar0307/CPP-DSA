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
        // create a new node
         Node* newNode = new Node(d);
         // set next pointer to head node
         newNode->next=head;
         // first previous value
         head->prev=newNode;
        // head upadate
         head=newNode;
       }
void traverse(Node* head){
   Node *temp=head;
   while(temp!=NULL){
    cout<<temp->prev<<" ";
    cout<<temp->data<<" ";
    cout<<temp->next<<" -> ";
    temp=temp->next;
   }

}
void insertAtTail(Node* &tail,int d){
    // create a new node
    Node* newNode=new Node(d);
    // set tail next value
    tail->next=newNode;
    // set newNode prev value
    newNode->prev=tail;
    // update tail
    tail=newNode;
}

void insertAtPosition(Node* head,int pos,int d){
    if(pos==1){
        insertAtHead(head,d);
    }

    else{

        
    }
}

int main(){

  Node* first =new Node(3);
  Node* head=first;
  Node* tail=first;

//   insertAtHead(head,5);
//   insertAtHead(head,7);
//   insertAtHead(head,9);
//   insertAtHead(head,11);



  insertAtTail(tail,5);
  insertAtTail(tail,7);
  insertAtTail(tail,9);
  insertAtTail(tail,11);


  traverse(head);


  


    return 0;
}