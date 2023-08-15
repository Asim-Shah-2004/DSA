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

void pairwise_swap(node* &head){

    if(head==NULL){
        return;
    }else if(head->next==NULL){
        return;
    }
    
    node* next = head->next;
    node* prev = head;
    head=next;
    int count=0;
    while(true){
        prev->next=next->next;
        if(next->next==NULL){
            next->next=prev;
            prev=NULL;
            break;
        }
        next->next=prev;
        prev=prev->next;
        if(prev->next==NULL){
            break;
        }
        next=next->next;
        next->next=prev->next;
        next=next->next;
        count++;
    }
    return;

}

int main(){
    node* head = NULL;
    for(int i=1;i<=11;i++){
        insertAtTail(head,i);
    }
    pairwise_swap(head);
    display(head);
    return 0;
}
