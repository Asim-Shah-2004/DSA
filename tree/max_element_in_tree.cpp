#include <iostream>
#include <queue>
#include <cmath>
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


int get_max(Node* root){
    if(root==NULL){
        return INT32_MIN;
    }else{
        return max(root->data,max(get_max(root->left),get_max(root->right)));
    }
}


int main() {

    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(120);
	root->right->right->right=new Node(80);
	
    cout<<"The maximum element is "<<get_max(root);

}
