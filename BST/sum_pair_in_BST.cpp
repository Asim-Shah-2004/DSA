#include <iostream>
#include <unordered_set>
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

bool find_sum(Node* root,int sum,unordered_set <int> &s){
    if(root==NULL){
        return false;
    }

    if(find_sum(root->left,sum,s)){
        return true;
    }
    if(s.count(sum-root->data)){
        return true;
    }else{
        s.insert(root->data);
    }

    return find_sum(root->right,sum,s);

}


int main(){
    Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);
    unordered_set <int> s;
    if(find_sum(root,7,s)){
        cout<<"the sum exists"<<endl;
    }else{
        cout<<"the sum does not exists"<<endl;
    }
      

}
