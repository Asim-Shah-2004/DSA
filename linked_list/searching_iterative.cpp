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

void search(node* &head,int data){
    if(head==NULL){
        cout<<"create a linked list frist"<<endl;
    }
    int pos=1,flag=1;
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==data){
            cout<<"element found at position "<<pos<<endl;
            flag=0;
            break;
        }
        temp=temp->next;
        pos++;
    }
    if(flag){
        cout<<"element not found"<<endl;
    }
}


int main(){
    node* head = NULL;
    for(int i=1;i<=10;i++){
        insertAtTail(head,i);
    }
    display(head);
    search(head,1);
    search(head,5);
    search(head,10);
    search(head,100);
    return 0;
}
