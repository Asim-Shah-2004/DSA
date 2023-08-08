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

int search(node* head,int data){
    if(head==NULL){
        return -1;
    }

    if(head->data==data){
        return 1;
    }

    int res = search(head->next,data);
    if(res==-1){return -1;}
    return res+1;
}


int main(){
    node* head = NULL;
    for(int i=1;i<=10;i++){
        insertAtTail(head,i);
    }
    display(head);
    cout<<search(head,1)<<endl;
    cout<<search(head,5)<<endl;
    cout<<search(head,10)<<endl;
    cout<<search(head,100)<<endl;
    return 0;
}
