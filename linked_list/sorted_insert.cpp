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

void display(node* head) {
    if (head == NULL) {
        cout << "Linked list is empty" << endl;
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* insert(node* head, int data) {
    node* n = new node(data);
    if (head == NULL || data < head->data) {
        n->next = head;
        return n;
    }

    node* temp = head;
    while (temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;

    return head;
}

int main() {
    node* head = NULL;
    int data;
    for (int i = 1; i <= 5; i++) {
        cout << "Enter data: ";
        cin >> data;
        head = insert(head, data);
        display(head);
    }
    return 0;
}
