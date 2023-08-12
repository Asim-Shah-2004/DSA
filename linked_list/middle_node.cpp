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

void create(node* &head,int arr[],int n){
    for(int i=0;i<n;i++){
        insert(head,arr[i]);
    }
}

void middle(node* head){
    if(head==NULL){
        cout<<"the list is empty"<<endl;
        return;
    }else if(head->next==NULL){
        cout<<head->data<<endl;
        return;
    }

    node* slow = head;
    node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<"The middle element is "<<slow->data<<endl;
    return;
}

void display(node* head){
    if(head==NULL){
        cout<<"The list is empty"<<endl;
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
    int data[] = {10,20,30,40,50};
    node* head = NULL;
    create(head,data,5);
    middle(head);
    return 0;
}
