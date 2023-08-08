#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void insertAtTail(node* &head,int data){
    node *n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
    n->prev=temp;

}

void create(node* &head){
    for(int i=1;i<=10;i++){
        insertAtTail(head,i);
    }
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    create(head);
    display(head);
    return 0;
}
