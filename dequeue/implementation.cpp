#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
    node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class dequeue {
    node* front;
    node* rear;

public:
    dequeue() {
        front = NULL;
        rear = NULL;
    }

    void push_front(int data) {
        node* n = new node(data);

        if (n == NULL) {
            cout << "dequeue is full" << endl;
        } else if (front == NULL) {
            front = n;
            rear = n;
        } else {
            n->next = front;
            front->prev = n;
            front = n;
        }
    }

    void push_back(int data) {
        node* n = new node(data);

        if (n == NULL) {
            cout << "dequeue is full" << endl;
        } else if (front == NULL) {
            front = n;
            rear = n;
        } else {
            rear->next = n;
            n->prev = rear;
            rear = rear->next;
        }
    }

    bool isEmpty() {
        return front == NULL;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "dequeue is empty, can't pop" << endl;
        } else {
            node* temp = front;
            front = front->next;
            if (front != NULL) {
                front->prev = NULL;
            } else {
                rear = NULL;
            }
            delete temp;
        }
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "dequeue is empty, can't pop" << endl;
        } else {
            node* temp = rear;
            rear = rear->prev;
            if (rear != NULL) {
                rear->next = NULL;
            } else {
                front = NULL;
            }
            delete temp;
        }
    }

    int getFront() {
        if (!isEmpty()) {
            return front->data;
        }
        cout << "dequeue is empty" << endl;
        return -1;
    }

    int getRear() {
        if (!isEmpty()) {
            return rear->data;
        }
        cout << "dequeue is empty" << endl;
        return -1; 
    }
};

int main() {
    dequeue dq;

    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_back(15);

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "Front after popping: " << dq.getFront() << endl;
    cout << "Rear after popping: " << dq.getRear() << endl;

    return 0;
}
