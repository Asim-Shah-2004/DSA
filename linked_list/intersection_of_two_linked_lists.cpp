#include <bits/stdc++.h>
#include <cmath> 
using namespace std; 

struct Node { 
	int data; 
	Node* next; 
	Node (int x){
	    data=x;
	    next=NULL;
	}
}; 

int count(Node* head){
    if(head==NULL){
        return 0;
    }
    Node* temp = head;
    int count=1;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}

void intersection(Node* head1,Node* head2){
    int lenght1 = count(head1);
    int lenght2 = count(head2);
    Node* temp1 = head1;
    Node* temp2 = head2;
    if(lenght1>lenght2){
        int diff = lenght1-lenght2;
        while(diff>0){
            temp1=temp1->next;
            diff--;
        }
    }else{
        int diff = lenght2-lenght1;
        while(diff>0){
            temp2=temp2->next;
            diff--;
        }
    }

    while(temp1!=NULL){
        if(temp1->data==temp2->data){
            cout<<"the common node is: "<<temp1->data;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }

}

int main() 
{ 
	/* 
		Creation of two linked lists 
	
		1st 3->6->9->15->30 
		2nd 10->15->30 
	
		15 is the intersection point 
	*/

	Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

    intersection(head1,head2);

} 
