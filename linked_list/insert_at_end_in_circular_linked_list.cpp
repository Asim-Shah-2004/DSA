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

void insertAtEnd(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }

    n->next=head->next;
    head->next=n;
    swap(n->data,head->data);
    head=head->next;
}


int main(){
    int data[] = {20,50,60,30,40};
    node* head = NULL;
    create(head,data,5);
    display(head);
    insertAtEnd(head,75);
    insertAtEnd(head,69);
    display(head);
    return 0;
}
