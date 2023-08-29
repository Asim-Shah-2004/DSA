#include <iostream>
#include <queue>
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

int res = 0;
int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int LH = height(root->left);
    int RH = height(root->right);
    res = max(res,LH+RH+1);
    return 1+max(LH,RH);
}



int main() {
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(60);
	root->right->left->left=new Node(50);
	root->right->right->right=new Node(70);
    height(root);
    cout<<"the diameter is "<<res;
    return 0;
}
