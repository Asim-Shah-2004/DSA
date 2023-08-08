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

void insert_at_head(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }
    head->prev=n;
    n->next=head;
    head=head->prev;
}

void create(node* &head){
    for(int i=1;i<=10;i++){
        insert_at_head(head,i);
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
