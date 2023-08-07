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

node *sort012(node *head)
{
    node *temp = head;
    int zero = 0, one = 0, two = 0;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        temp = temp->next;
    }

    node *zeroHead = new node(-1);
    node *zerotail = zeroHead;
    while (zero--)
    {
        insert(zerotail, 0);
    }

    node *oneHead = new node(-1);
    node *onetail = oneHead;
    while (one--)
    {
        insert(onetail, 1);
    }

    node *twoHead = new node(-1);
    node *twotail = twoHead;
    while (two--)
    {
        insert(twotail, 2);
    }

    // node *ansHead = zeroHead->next;
    // zeroHead->next = NULL;
    // zerotail->next = oneHead->next;
    // oneHead->next = NULL;
    // onetail->next = twoHead->next;
    // twoHead->next = NULL;

    return zerotail;
}

int main()
{

    node *first = new node(1);
    node *head = first;
    node *tail = first;

    // insert(tail, 0);
    // insert(tail, 1);
    // insert(tail, 0);
    insert(tail, 2);
    insert(tail, 1);
    insert(tail, 2);

    traverse(head);
    cout << endl;

    node *temp = sort012(head);
    traverse(temp);
    cout << endl;
}