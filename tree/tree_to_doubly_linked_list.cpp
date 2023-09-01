#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


Node *prev_=NULL;
Node* convert(Node* root){
    if(root==NULL){
        return root;
    }
    Node* head = convert(root->left);
    if(prev_==NULL){
        head=root;
    }else{
        root->left=prev_;
        prev_->right=root;
    }
    prev_=root;
    convert(root->right);
    return head;
}

void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main() {
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);
	print(convert(root));
}
