#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insert(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void traverse(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

node* mergeTwoSorted(node *head1,node* head2){

    node* temp1=head1;
    node* temp2=head2;
    node* temp=new node(-1);
    node* temptail=temp;

    while(temp1 !=NULL && temp2 !=NULL){
        if(temp1->data <= temp2->data){
            insert(temptail,temp1->data);
             temp1=temp1->next;
        }
        else{
            insert(temptail,temp2->data);
             temp2=temp2->next;
        }
       
       
    }
    while(temp1!=NULL){
        insert(temptail,temp1->data);
             temp1=temp1->next;
    }
    while(temp2!=NULL){
             insert(temptail,temp2->data);
             temp2=temp2->next;
    }

    node* anshead=temp->next;
    temp->next=NULL;

    return anshead;

}

int main()
{

    node *first = new node(1);
    node *head1 = first;
    node *tail1 = first;
    insert(tail1, 3);
    insert(tail1, 4);
    insert(tail1, 6);

    traverse(head1);
    cout << endl;

    node *second = new node(2);
    node *head2 = second;
    node *tail2 = second;
    insert(tail2, 5);
    insert(tail2, 7);
    insert(tail2, 9);
    insert(tail2, 11);
    insert(tail2, 13);

    traverse(head2);
    cout << endl;


    node *temp = mergeTwoSorted(head1,head2);
    traverse(temp);
    cout << endl;
}