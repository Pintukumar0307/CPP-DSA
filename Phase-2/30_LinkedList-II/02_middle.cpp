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

node* getMiddle(node* head){
    node* fast=head;
    node* slow= head;

    while(fast != NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;

    }
    return slow;
}




int main(){

    node* first= new node(4);
    node* head=first;
    node* tail=first;

    insert(tail,3);
    insert(tail,1);
    insert(tail,7);
    insert(tail,11);
    insert(tail,9);
    insert(tail,19);

 traverse(head);
 cout<<endl;

 node* middle=getMiddle(head);

 cout<<middle->data<<endl;

}