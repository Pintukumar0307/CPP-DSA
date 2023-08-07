#include<iostream>
using namespace std;

class node
{

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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   
}

node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    
    while(curr != NULL){
        node* Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
node* reverseRec(node* curr, node* prev){

    if(curr==NULL){
        return prev;
    }
    node* Next=curr->next;
    curr->next=prev;
    
    return reverseRec(Next,curr);
    
}


int main(){

    node* first= new node(4);
    node* head=first;
    node* tail=first;

    insert(tail,3);
    insert(tail,1);
    insert(tail,2);
    insert(tail,7);

 traverse(head);
 cout<<endl;

 node* temp=reverse(head);
 traverse(temp);
 cout<<endl;


// node* temp = reverseRec(head, NULL);
//  traverse(temp);
//  cout<<endl;

}