#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    public:
    node* top;
    stack(){
        top=NULL;
    }

    void push(int data){
        node* n = new node(data);

        //if n is null then stack memory is full
        if(n==NULL){
            cout<<"stack overflow"<<endl;
            return;
        }

        //creating node
        n->next=top;
        top=n;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        node* temp = top;
        top=top->next;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top==NULL;
    }

};

int main(){
    stack st;
    st.push(1);
    st.push(32);
    st.push(45);
    st.push(55);
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    if(st.isEmpty()){
        cout<<"empty"<<endl;
    }
    return 0;
}
