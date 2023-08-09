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
    node* n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void delete_at_head(node* &head){
    if(head==NULL){
        return;
    }else if(head->next==NULL){
        head=NULL;
        return;
    }
    node* temp = head;
    head=head->next;
    head->prev=NULL;
    delete temp;
}

void display(node* &head){
    if(head==NULL){
        return;
    }
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    for(int i=0;i<=10;i++){
        insertAtTail(head,i);
    }
    display(head);
    delete_at_head(head);
    display(head);
    return 0;
}
