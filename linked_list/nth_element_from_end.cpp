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

void nth_element_from_end(node* head,int n){
    node* fast = head;
    node* slow = head;

    for(int i=1;i<n;i++){
        fast=fast->next;
    }


    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data<<" ";
}

int main(){
    int data[] = {10,20,30,40,50,60,70,80};
    node* head = NULL;
    create(head,data,8);
    nth_element_from_end(head,4);
    return 0;
}
