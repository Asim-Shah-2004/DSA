#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;  
    node(int data){
        this->data=data;
        next=NULL;
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

void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void remove(node* &head){
    node* temp = head;

    //just to set up the question
    for(int i=1;i<3;i++){
        temp=temp->next;
    }

    //solution
    temp->data=temp->next->data;
    temp->next=temp->next->next;
}

int main(){
    node* head = NULL;
    for(int i=1;i<=10;i++){
        insertAtTail(head,i);
    }
    display(head);
    remove(head);
    display(head);
    return 0;
}
