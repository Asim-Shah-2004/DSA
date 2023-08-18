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
    node* top;
    int min;
    public:
    stack(){
        top=NULL;
    }
    
    void push(int data){
        node* n = new node(data);
        if(n==NULL){
            cout<<"stack overflow"<<endl;
            return;
        }
        if(top==NULL){
            min=n->data;
        }else if(n->data<=min){
            n->data=2*n->data-min;
            min=(min+n->data)/2;
        }
        n->next=top;
        top=n;
    }

    bool isEmpty(){
        return top==NULL;
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }

        if(top->data<=min){
            min=2*min-top->data;
        }

        node* temp = top;
        top=top->next;
        delete temp;
    }

    int peek(){
        return top->data<=min?min:top->data;
    }

    int getMin(){
        return min;
    }

};

int main()
{
    stack s;
    s.push(4);
    s.push(5);
    s.push(8);
    s.push(1);
    s.pop();
    s.push(-20);
    s.push(-10);
    s.pop();
 
    cout<<" Minimum Element from Stack: " <<s.getMin();
  
    return 0; 
}
