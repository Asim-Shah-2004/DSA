#include <iostream>
#include <stack>
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


void inorder(Node* root){
    stack <Node*> st;
    Node* curr = root;
    while(curr!=NULL || !st.empty()){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main() {
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    inorder(root);
    return 0;
}
