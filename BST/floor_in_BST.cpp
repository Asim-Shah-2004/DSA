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

int floor(Node* root,int x){
    Node* curr = root;
    Node* floor = NULL;
    while(curr!=NULL){
        if(curr->data==x){
            floor = curr;
            return floor->data;
        }else if(curr->data>x){
            curr=curr->left;
        }else{
            floor = curr;
            curr=curr->right;
        }
    }
    return floor->data;
}

int main(){

	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
    cout<<"The floor value is "<<floor(root,17);
    return 0;
}
