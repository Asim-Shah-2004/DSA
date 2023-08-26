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


bool child_sum_property(Node* root){
    if(root==NULL){
        return true;
    }else if(root->left==NULL && root->right==NULL){
        return true;
    }

    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->data;
    }
    if(root->right!=NULL){
        sum+=root->right->data;
    }
    return (sum==root->data && child_sum_property(root->left) && child_sum_property(root->right));
}


int main() {

    Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(9);
    if(child_sum_property(root)){
        cout<<"follows childern sum property"<<endl;
    }else{
        cout<<"dosent follow children sum property"<<endl;
    }

}
