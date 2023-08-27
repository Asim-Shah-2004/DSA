#include <iostream>
#include <queue>
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

int flag=1;
int balanced(Node* root){
    if(root==NULL){
        return 0;
    }else if(root->left==NULL && root->right==NULL){
        return 0;
    }
    int LH = balanced(root->left);
    if(LH==-1){
        return -1;
    }
    int RH = balanced(root->right);
    if(RH==-1){
        return -1;
    }
    if(abs(LH-RH)>1)
        return -1; 
    else
        return max(LH,RH)+1;
}

int main(){
    
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
    root->right->right->right=new Node(100);
    root->right->right->right->right=new Node(120);
    if(balanced(root)==-1){
        cout<<"tree is not balanced"<<endl;
    }else{
        cout<<"tree is balanced"<<endl;
    }
}
