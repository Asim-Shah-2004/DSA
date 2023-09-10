#include <iostream>
#include <map>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }   
};

void vertical_sum(Node* root,map<int,int> &m,int hd){
    if(root==NULL){
        return;
    }
    vertical_sum(root->left,m,hd-1);
    m[hd]+=root->data;
    vertical_sum(root->right,m,hd+1);
}

void printSum(Node* root){
    map <int,int> m;
    vertical_sum(root,m,0);
    for(auto x:m){
        cout<<x.second<<" ";
    }
}


int main(){
	Node *root = new Node(10);  
    root->left = new Node(20);  
    root->right = new Node(50);  
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    printSum(root);
}
