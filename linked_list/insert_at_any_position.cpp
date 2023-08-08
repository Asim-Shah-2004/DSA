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


void insert(Node* &head,int data,int pos){
    
    Node* n = new Node(data);
    Node* temp = head;

    if(pos==1){
        n->next=head;
        head=n;
        return;
    }
    
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
        
    }

    if(temp==NULL){
        return;
    }
    n->next=temp->next;
    temp->next=n;
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
    insertAtHead(head,50);
    insert(head,10,3);
    insert(head,60,1);
    insert(head,80,700);
    display(head);
    return 0;
}
