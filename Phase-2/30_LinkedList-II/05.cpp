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
    node* prev=NULL;
    node* curr=head;
    node* Next=NULL;

    while(curr !=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }

 return prev;

}


node* palindrome(node* head){
    
    node* prev=NULL;
    node* slow=head;
    node* fast=head;
    while(fast != NULL && fast->next != NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    node* first=head;
    node* second=reverse(slow);

    return head;
    // while(first != NULL && second != NULL){
    //           if(first->data !=second->data){
    //             return false;
    //           }
    //           first=first->next;
    //           second=second->next;
              
    // }
  
    // return true;

}



int main(){

    node* first= new node(1);
    node* head=first;
    node* tail=first;
    
    // insert(tail,2);
    // insert(tail,3);
    // insert(tail,4);
    // // insert(tail,5);
    // insert(tail,4);
    // insert(tail,3);
    // insert(tail,2);
    // insert(tail,1);

 traverse(head);
 cout<<endl;

node* temp=palindrome(head);
traverse(temp);
 cout<<endl;


}