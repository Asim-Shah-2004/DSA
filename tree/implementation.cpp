#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int main(){
    node* root = new node(10);
    root->left=new node(20);
    root->left->left = new node(30);
    root->right = new node(40);
    root->left->right = new node(75);
    cout<<root->left->right->data<<endl;
}
