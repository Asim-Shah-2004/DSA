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


node* remove_duplicates(node* head){
    if(head==NULL){
        return NULL;
    }else if(head->next==NULL){
        return head;
    }

    node* temp = head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
        }
        
    }

    return head;

}

int main(){
    int data[] = {20,20,30,30,30,60,80,80};
    node* head = NULL;
    create(head,data,8);
    display(remove_duplicates(head));

    return 0;
}
