#include <iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
    stack(int size){
        arr = new int[size];
        top=-1;
        this->size=size;
    }
    

    void push(int data){
        if(top==size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }

    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top==-1;
    }

};

int main(){
    stack st(3);
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
