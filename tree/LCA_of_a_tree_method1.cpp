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

bool path(Node* root,int n,vector<Node*> &p){
    if(root==NULL){
        return false;
    }
    p.push_back(root);
    if(root->data==n){
        return true;
    }

    if(path(root->left,n,p)||path(root->right,n,p)){
        return true;
    }

    p.pop_back();
    return false;
}

int LCA(Node* root,int n1,int n2){
    vector <Node*> p1,p2;
    if(path(root,n1,p1)&&path(root,n2,p2)){
        for(int i=0;i<(p1.size()>p2.size()?p1.size():p2.size());i++){
            if(p1[i+1]!=p2[i+1]){
                return p1[i]->data;
            }
            
        }
        return -1;
    }else{
        return -1;
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
    cout<<"the lca is "<<LCA(root,50,60);
    return 0;
}
