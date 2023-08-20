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

void insertAtEnd(node* &head,int data){
    node* n = new node(data);
    if(n==NULL){
        cout<<"stack overflow"<<endl;
        return;
    }else if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while (temp->next!=NULL){
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

void create(node* &head,int data[],int n){
    for(int i=0;i<n;i++){
        insertAtEnd(head,data[i]);
    }
}

node* seperete(node* &head){
    node* ee=NULL;
    node* es=NULL;
    node* oe=NULL;
    node* os=NULL;
    node* curr = head;
    while(curr!=NULL){
        int x = curr->data;
        if(x%2==0){
            if(es==NULL){
                es=curr;
                ee=es;
            }else{
                ee->next=curr;
                ee=ee->next;
            }
        }else{
            if(os==NULL){
                os=curr;
                oe=os;
            }else{
                oe->next=curr;
                oe=oe->next;
            }
        }
        curr=curr->next;
    }
    if(os==NULL||es==NULL){
        return head;
    }
    ee->next=os;
    oe->next=NULL;
    return es;
}

int main(){
    int data[] = {10,7,8,2,6,9,15};
    node* head = NULL;
    create(head,data,7);
    display(head);
    display(seperete(head));
}

