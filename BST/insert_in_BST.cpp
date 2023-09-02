#include <iostream>
#include <stack>
#include <vector>
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

void insertInBST_iterative(Node* &root,int x){
    Node* curr = root;
    Node* parent = NULL;
    while(curr!=NULL){
        parent = curr;
        if(curr->data==x){
            cout<<"element already present"<<endl;
        }else if(curr->data>x){
            curr=curr->left;
        }else{
            curr=curr->right;
        }
    }

    if(parent==NULL){
        Node* n = new Node(x);
        root=n;
    }else if(parent->data>x){
        Node* n = new Node(x);
        parent->left=n;
    }else{
        Node* n = new Node(x);
        parent->right=n;
    }
}

Node* insertInBST_recursive(Node* &root,int x){
    if(root->data==x){
        return new Node(x);
    }else if(root->data<x){
        root->right=insertInBST_recursive(root->right,x);
    }else if(root->data>x){
        root->left=insertInBST_recursive(root->left,x);
    }
    return root;
}

int main(){
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
    insertInBST_iterative(root,17);
    cout<<root->right->left->left->right->data<<endl;
    return 0;
}
