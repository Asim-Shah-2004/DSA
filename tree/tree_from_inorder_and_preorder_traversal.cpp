#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  

int index = 0;
unordered_map <int,int> m;
Node* create_tree(int inorder[],int preorder[],int lb,int ub){
    Node* res = new Node(preorder[index++]);
    if(lb>ub){
        return NULL;
    }
    if(lb==ub){
        return res;
    }
    int mid = m[res->key];
    res->left = create_tree(inorder,preorder,lb,mid-1);
    res->right = create_tree(inorder,preorder,mid+1,ub);
}

void mapBuilding(int inorder[],int n){
    for(int i=0;i<n;i++){
        m[inorder[i]]=i;
    }
}

int main() {
	
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
    mapBuilding(in,n);
	Node *root=create_tree(in, pre, 0, n-1);
	inorder(root);
}
