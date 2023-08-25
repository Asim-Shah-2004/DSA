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

int height=0;
void print(Node* root,int k){
    if(root==NULL){
        return;
    }else if(k==0){
        cout<<root->data<<" ";
    }else{
        print(root->left,k-1);
        print(root->right,k-1);
    }
}


int main() {

    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
	
	print(root,2);
}
