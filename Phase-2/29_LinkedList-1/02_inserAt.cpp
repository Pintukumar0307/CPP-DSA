#include<iostream>
using namespace std;

class Node{

      // data members
       public:
       int data;
       Node* next;
       
       // constructor
       Node(int data){
        this->data=data;
        this->next=NULL;
       }

       
};
void insertAtHead(Node* &head,int d){
        // create a new node
         Node* newNode = new Node(d);
        // set next pointer to head node
         newNode->next=head;
        // head upadate
         head=newNode;
       }

void insertAttail(Node* &tail,int d){
      Node* newNode = new Node(d);
      tail->next=newNode;
      tail=newNode;
}

void insertAtPosition(Node* &head,int pos, int d){
   if(pos==1){
      insertAtHead(head,d);
   }
   else{
     // creation
       Node* newNode =new Node(d);
      
      // traverse
      Node* prev = head;
      int t=pos-2;
      while(t--){
        prev=prev->next;
      }

      //  connection
      newNode->next=prev->next;
      prev->next=newNode;

   }
}

void deleteValue(Node* &head,int target,int pos){

  if(head==NULL){
    return;
  }

  Node* temp=head;
  Node* prev=NULL;
  if(target==temp->data && pos==1){
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  else{
     while(temp != NULL && temp->data != target){
        prev=temp;
        temp=temp->next;
     }
     if(temp==NULL){
      cout<<"Node not found "<<endl;
      return;
     }

     prev->next=temp->next;
     temp->next=NULL;
     delete temp;
  }
}

void traverse(Node* head){
   Node *temp=head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }

}
int getLength(Node* head){
  Node *temp=head;
  int len=0;
  while(temp!=NULL){
      len++;
      temp=temp->next;
  }
  return len;
}


int main(){

  Node* first =new Node(3);
  Node* head=first;
  Node* tail=first;


  //  insert at head
  // insertAtHead(head,5);
  // insertAtHead(head,7);
  // insertAtHead(head,9);
  // insertAtHead(head,11);
  // insertAtHead(head,13);
  // insertAtHead(head,15);


  // insert at tail
  insertAttail(tail,5);
  insertAttail(tail,7);
  insertAttail(tail,9);
  insertAttail(tail,11);
  insertAttail(tail,13);
  insertAttail(tail,15);


  // travers the linked list
  traverse(head);

  cout<<endl;
  // insert at position
  insertAtPosition(head,3,12);

// travers the linked list
  traverse(head);
  cout<<endl;

  // delete the lindked list node
  deleteValue(head,12,1);

  // travers the linked list
  traverse(head);
  cout<<endl;
  // Get lenth of linked list
  cout<<getLength(head)<<endl;
  
  
    return 0;
}