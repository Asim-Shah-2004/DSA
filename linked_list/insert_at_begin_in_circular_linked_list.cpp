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

void create(node* &head,int arr[],int size){

    node* n = new node(arr[0]);
    if(head==NULL){
        head=n;
    }
    node* temp = head;

    for(int i=1;i<size;i++){
        node* n = new node(arr[i]);
        temp->next=n;
        temp=temp->next;
    }

    temp->next=head;
}

void display(node* &head){
    if(head==NULL){
        cout<<"create a linked list"<<endl;
        return;
    }
    cout<<head->data<<" ";
    for(node*temp=head->next;temp!=head;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

void insertAtBegin(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head->next;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}


int main(){
    int data[] = {20,50,60,30,40};
    node* head = NULL;
    create(head,data,5);
    display(head);
    insertAtBegin(head,15);
    display(head);
    return 0;
}
