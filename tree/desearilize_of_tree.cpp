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


void searilize(Node* root,vector<int> &v){
    if(root==NULL){
        v.push_back(-1);
        return;
    }
    v.push_back(root->data);
    searilize(root->left,v);
    searilize(root->right,v);

}

const int EMPTY = -1;
int index=0;
Node* desearlilze(vector<int> v){
    if(index==v.size()){
        return NULL;
    }

    int val = v[index];
    index++;

    if(val==-1){
        return NULL;
    }
    
    Node* root = new Node(val);
    root->left=desearlilze(v);
    root->right=desearlilze(v);
    return root;

}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main() {
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->left->left->left=new Node(60);
	root->left->left->left->left=new Node(70);
    vector<int> data;
    searilize(root,data);
    Node* root2 = desearlilze(data);
    cout<<root2->left->left->left->left->data;
}
