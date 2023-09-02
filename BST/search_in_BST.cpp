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

bool iterative_search(Node* root,int x){
    Node* curr = root;
    while(curr!=NULL){
        if(curr->data>x){
            curr=curr->left;
        }else if(curr->data<x){
            curr=curr->right;
        }else{
            return true;
        }
    }
    return false;
}

bool recursive_search(Node* root,int x){
    if(root==NULL){
        return false;
    }else if(root->data==x){
        return true;
    }else if(root->data>x){
        return recursive_search(root->left,x);
    }else{
        return recursive_search(root->right,x);
    }
}

int main() {
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
    if(iterative_search(root,80)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }

    if(iterative_search(root,16)){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }

}
