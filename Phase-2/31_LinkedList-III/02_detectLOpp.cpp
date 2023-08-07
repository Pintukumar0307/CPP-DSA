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
   while(curr!=NULL){
    node* Next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=Next;
   }
   return prev;
}

node* kthNodeFromLast(node* head,int k){

    node* temp=reverse(head);
    int count=k-1;
    while (count--)
    {
        temp=temp->next;
    }
    temp->next=NULL;

return temp;
}

int kth(node* head,int k){
   
    if(head==NULL){
       return 0;
    }
    int ans=kth(head->next,k)+1;
    
    if(k==ans){
        cout<<head->data<<endl;
    }
  return ans;
}



int main(){

    node* first= new node(1);
    node* head=first;
    node* tail=first;
    
    insert(tail,2);
    insert(tail,3);
    insert(tail,4);
    insert(tail,5);
    insert(tail,14);
    insert(tail,13);
    insert(tail,12);
    insert(tail,11);

 traverse(head);
 cout<<endl;

//  node* rev=reverse(head);
// traverse(rev);
//  cout<<endl;

//  node* temp=kthNodeFromLast(head,3);
//  traverse(temp);
//  cout<<endl;

 int temp=kth(head,3);
//  traverse(temp);
 cout<<temp<<endl;




}