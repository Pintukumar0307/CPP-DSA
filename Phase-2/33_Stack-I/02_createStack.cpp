#include <iostream>
using namespace std;
#define MAX 1000

class Stack
{

public:
    int arr[MAX];
    int top;
    int size;

    Stack(int size)
    {

        this->top = -1;
        this->size = size;
    }
    bool push(int data)
    {
        if (top >= size - 1)
        {
            cout << "Stack overflow:"<<data<< endl;
            return false;
        }

        else
        {
            top++;
            arr[top] = data;
            // cout << top << ":" << arr[top] << endl;
            return true;
        }
    }

    void pop()
    {
        if (top < 0) {
        cout << "Stack Underflow: Stack is empty"<<endl;
        return;
        }
        top--;
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top < 0);
    }

    int getTop()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return 0;
        }
        else
        {
            int x = arr[top];
            return x;
        }
    }
};

int main()
{

    Stack *st = new Stack(5);
    st->pop();
    st->push(5);
    st->push(9);
    st->push(11);
    st->push(13);
    st->push(14);
    st->push(15);
    st->push(17);
    // cout << st->getSize() << endl;
    // cout << st->getTop() << endl;
    // st->pop();

    while (!st->isEmpty())
    {
        cout << st->getTop() << " ";
        st->pop();
    }

    cout << endl;
}