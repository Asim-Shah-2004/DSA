#include <iostream>
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

Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1||root->data==n2){
        return root;
    }
    Node* LCA1 = LCA(root->left,n1,n2);
    Node* LCA2 = LCA(root->right,n1,n2);
    if(LCA1!=NULL && LCA2!=NULL){
        return root;
    }
    
    if(LCA1!=NULL){
        return LCA1;
    }else{
        return LCA2;
    }

}

int main() {
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
    cout<<"the lca is "<<LCA(root,50,60)->data;
    return 0;
}
