#include <iostream>
using namespace std;

class stack{
    int top1;
    int top2;
    int *arr;
    int capacity;

    public:

    stack(int n){
        arr = new int[n];
        top1 = -1;
        top2 = n;
        capacity = n;
    }

    bool isEmpty(){
        return top1>=top2;
    }

    void push1(int data){
        if(isEmpty()){
            cout<<"stack is full"<<endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data){
        if(isEmpty()){
            cout<<"stack is full"<<endl;
            return;
        }

        top2--;
        arr[top2] = data;
    }

    void pop1(){
        if(top1==-1){
            cout<<"stack is empty"<<endl;
            return;
        }

        top1--;
    }

    void pop2(){
        if(top2==capacity){
            cout<<"stack is empty"<<endl;
            return;
        }

        top2++;
    }

    int Top1(){
        return arr[top1];
    }

    int Top2(){
        return arr[top2];
    }

};

int main() 
{ 
    stack ts(5); 
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.Top1();
    ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.Top2();
    ts.pop2(); 
    return 0; 
}
