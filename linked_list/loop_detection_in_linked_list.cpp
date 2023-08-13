#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next = NULL;
    }
};

Node* create(){
    //making loop
    Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
    return head;
}

bool isLoop(Node* &head){

    if(head==NULL){
        cout<<"make a linked list"<<endl;
        return false;
    }

    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main() 
{ 
    Node* head = create();
    if(isLoop(head)){
        cout<<"loop exists"<<endl;
    }else{
        cout<<"loop dosent exist"<<endl;
    }
    return 0;
} 
