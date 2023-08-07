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
        front = -1;
        rear = -1;
        this->size = size;
    }

    void enqueue(int d)
    {
       if((front==0 && rear==size-1) && ( (rear+1)%size==front) ){
          cout<<"Queue is overflow"<<endl;
          return;
       }
       else if(front==-1){
         cout<<"First element is insert"<<endl;
          front=rear=0;
          arr[rear]=d;
       }
       else if(rear==size-1 && front!=0){
        cout<<"Element is inserted"<<endl;
          rear=0;
          arr[rear]=d;
       }
       else{
         cout<<"Element is inserted"<<endl;
        rear++;
        arr[rear]=d;
       }
    }



    void dequeue(){
        if(front==-1){
            cout<<"UnderFlow"<<endl;
            return;
        }
        cout<<"element is pop"<<endl;
        if(front==rear){
            rear=front=-1;
        }
        else if(front=size-1){
            front=0;
        }
        else{
            front++;
        }

       
    }

    // int getSize()
    // {
    //     return rear - front;
    // }

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

        return arr[rear];
    }
};

int main()
{

    Queue *q = new Queue(5);

    q->enqueue(5);
    q->enqueue(7);
    q->enqueue(11);
    q->enqueue(13);
    q->enqueue(15);
    q->enqueue(15);

    cout << q->getFront() << endl;
    cout << q->getRear() << endl;

    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();
    q->dequeue();

    // cout << q->getFront() << endl;
    // cout << q->getSize() << endl;
    // cout << q->getRear() << endl;
}