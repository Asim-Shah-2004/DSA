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

void create(node* &head,int arr[],int size){

    node* n = new node(arr[0]);
    if(head==NULL){
        head=n;
    }
    node* temp = head;

    for(int i=1;i<size;i++){
        node* n = new node(arr[i]);
        temp->next=n;
        temp=temp->next;
    }

    temp->next=head;
}

void display(node* &head){
    if(head==NULL){
        cout<<"create a linked list"<<endl;
        return;
    }
    cout<<head->data<<" ";
    for(node*temp=head->next;temp!=head;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

void insertAtEnd(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        head=n;
        return;
    }

    n->next=head->next;
    head->next=n;
    swap(n->data,head->data);
    head=head->next;
}

void remove(node* &head,int k){
    node* temp = head;
    node* temp2 = head;
    if(k==1){
        while(temp->next!=head){
            temp=temp->next;
        }
        head=head->next;
        temp->next=temp2->next;
        delete temp2;
        return;
    }

    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    temp2 = temp->next; 
    temp->next=temp2->next;
    delete temp2;

}


int main(){
    int data[] = {20,50,60,30,40};
    node* head = NULL;
    create(head,data,5);
    display(head);
    remove(head,3);
    remove(head,1);
    display(head);
    return 0;
}
