#include <iostream>
#include <vector>
#include <cmath>
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

int height(Node* root){
    if(root==NULL){
        return 0;
    }else{
        return 1+max(height(root->left),height(root->right));
    }

}

int count(Node* root){

    if(root==NULL){
        return 0;
    }

    Node* curr = root;
    int LH,RH=0;

    while(curr!=NULL){
        curr=curr->left;
        LH++;
    }

    curr = root;
    while(curr!=NULL){
        curr=curr->right;
        RH++;
    }

    if(LH==RH){
        return pow(2,RH)-1;
    }else{
        return 1+count(root->left)+count(root->right);
    }
}

int main() {
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<"no of nodes are "<<count(root);
    return 0;
}
