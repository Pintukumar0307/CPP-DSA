#include <iostream>
#include <queue>
using namespace std;
#define MAX 1000

class Queue
{

public:
    int arr[MAX];
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        front = 0;
        rear = 0;
        this->size = size;
    }

    void push(int d)
    {
        if (rear >= size)
        {
            cout << "Stack overflow:" << d << endl;
        }
        arr[rear] = d;
        rear++;
    }
    void pop()
    {
        if (front == rear)
        {
            cout << "UnderFlow:" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getSize()
    {
        return rear - front;
    }

    int getFront()
    {
        if(front==rear){
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
          if(front==rear){
            return -1;
        }

        return arr[rear-1];
    }
};

int main()
{

    Queue *q = new Queue(5);

    q->push(5);
    q->push(7);
    q->push(11);
    q->push(13);
    q->push(15);
    q->push(15);
    q->push(15);

    cout << q->getFront() << endl;
    cout << q->getSize() << endl;
    cout << q->getRear() << endl;

    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->pop();

    cout << q->getFront() << endl;
    cout << q->getSize() << endl;
    cout << q->getRear() << endl;
}