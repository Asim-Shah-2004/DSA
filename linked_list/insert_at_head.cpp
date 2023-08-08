#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            next=NULL;
        }
};

void insertAtHead(Node* &head,int data){
    Node *n = new Node(data);
    n->next=head;
    head=n;

}

void display(Node *head){
    
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){
    Node* head = NULL;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    display(head);
    return 0;
}
