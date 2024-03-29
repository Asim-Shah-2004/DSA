#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};


int height(Node* root){
    if(root==NULL){
        return 0;
    }else{
        return max(height(root->left),height(root->right))+1;
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    root->right->left->left=new Node(100);
	
	cout<<"the height is "<<height(root);
}
