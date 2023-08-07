#include <iostream>

using namespace std;



class node{
  public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insert(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void traverse(node*head){
    node* temp=head;
    while (temp != NULL){
        cout <<temp->data<<" ";
        temp=temp->next;
    }
   
}

node* reverse(node* head){
     if(head==NULL){
        return NULL;

    }
    node* curr=head;
    node* prev=NULL;
    node* Next=NULL;
    int count=2;

    while(count-- && curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }

    if(Next!=NULL){
       head->next=reverse(Next);
   }

   return prev;
    
}

int main(){

    node* first= new node(1);
    node* head=first;
    node* tail=first;
    
    insert(tail,2);
    insert(tail,3);
    insert(tail,4);
    insert(tail,5);
    insert(tail,6);
    insert(tail,7);
    insert(tail,8);

 traverse(head);
 cout<<endl;

 node* temp=reverse(head);
 traverse(temp);
 cout<<endl;


}