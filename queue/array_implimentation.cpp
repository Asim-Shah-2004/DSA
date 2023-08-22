#include <iostream>
using namespace std;

class queue{
    int* arr;
    int front;
    int cap;
    int size;
    public:
    queue(int cap){
        this->cap=cap;
        arr = new int[cap];
        front=0;
        size=0;
    }

    //we do circular implementation for efficiency

    bool isFull(){
        return size==cap-1;
    }

    bool isEmpty(){
        return size==0;
    }

    int getRear(){
        return (front+size-1)%cap;
    }

    int getFront(){
        return isEmpty()?-1:front;
    }

    void enqueue(int data){
        if(isFull()){
            cout<<"cant enqueue more items"<<endl;
            return;
        }

        int rear = getRear();
        //moving circularly
        rear=(rear+1)%cap;
        arr[rear] = data;
        size++;
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"the queue is empty"<<endl;
            return;
        }

        front=(front+1)%cap;
        size--;
    }

};

int main() 
{ 
	queue q(1000); 
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.dequeue();
    cout<<"front "<<q.getFront()<<endl;
    cout<<"rear "<<q.getRear()<<endl;
	return 0; 
} 

