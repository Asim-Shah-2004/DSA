#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int data) {
        this->data = data;
        next = NULL;
    }
};

class queue {
    node* front;
    node* rear;
public:
    queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data) {
        node* n = new node(data);
        if (n == NULL) {
            cout << "queue is full" << endl;
        } else if (rear == NULL) {
            front = rear = n;
        } else {
            rear->next = n;
            rear = n;
        }
    }

    bool isEmpty() {
        return rear == NULL;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "queue is empty" << endl;
        } else {
            node* temp = front;
            front = front->next;
            if (front == NULL) {
                rear = NULL;
            }
            delete temp;
        }
    }

    int getFront() {
        if (!isEmpty()) {
            return front->data;
        }
        cout << "queue is empty" << endl;
        return -1; // Return a default value indicating an error or empty queue
    }

    int getRear() {
        if (!isEmpty()) {
            return rear->data;
        }
        cout << "queue is empty" << endl;
        return -1; // Return a default value indicating an error or empty queue
    }
};

int main() {
    queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.dequeue();
    cout << "front " << q.getFront() << endl;
    cout << "rear " << q.getRear() << endl;
    return 0;
}
