#include <iostream>
#include <vector>
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

node* reverse(node* &head){
    if(head==NULL){
        cout<<"create a linked list"<<endl;
        return NULL;
    }else if(head->next==NULL){
        return head;
    }
    
    node* curr = head;
    node* prev = NULL;
    while(curr!=NULL){
        node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main(){
    int data[] = {1,2,3,4,5,6,7,8};
    node* head = NULL;
    create(head,data,8);
    display(reverse(head));
    return 0;
}
