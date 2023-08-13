#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next = NULL;
    }
};

void insert(node* &head,int data){
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

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverse_part(node* &head,int k){
    if(head==NULL){
        cout<<"create a linked list"<<endl;
        return NULL;
    }
    node* curr = head;
    node* prev = NULL;
    int count =0;
    while(curr!=NULL && count<k){
        node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(count<k){
        return prev;    //in cases where lenght is less than k
    }
    head->next=curr;
    return prev;
}

int main(){
    node* head = NULL;
    for(int i=1;i<=10;i++){
        insert(head,i);
    }
    display(reverse_part(head,4));
    return 0;
}
