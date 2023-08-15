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


void create(node* &head,int data[],int n){
    for(int i=0;i<n;i++){
        insertAtTail(head,data[i]);
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

node* middle(node* &head){
    if(head==NULL){
        return NULL;
    }else if(head->next==NULL){
        return head;
    }
    node* slow = head;
    node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;    
        slow=slow->next;    
    }
    return slow;
}

node* reverse(node* &head){
    if(head==NULL){
        return NULL;
    }else if (head->next==NULL){
        return head;
    }

    node* curr = head->next;
    node* prev = head;
    node* temp = head;
    while(curr!=NULL){
        node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    temp->next=NULL;
    return prev;
}

void palindrome(node* &head){
    node* temp = middle(head);
    temp->next=reverse(temp->next);
    node* temp2 = temp->next;
    node* temp1 = head;
    int flag=1;
    while(temp2!=NULL){
        if(temp1->data!=temp2->data){
            flag=0;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(flag){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }
}


int main(){
    node* head = NULL;
    int data[] = {1,2,3,3,2,1};
    create(head,data,6);
    palindrome(head);
    return 0;
}
