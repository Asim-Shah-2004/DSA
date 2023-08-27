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

int width(Node* root){
    queue <Node*> q;
    q.push(root);
    int width=0;
    while(!q.empty()){
        int count = q.size();
        width = max(count,width);
        for(int i=0;i<count;i++){
            Node * curr = q.front();
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
    return width;
}

int main(){
    
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);

    cout<<"the max width is "<<width(root);
    return 0;
}
