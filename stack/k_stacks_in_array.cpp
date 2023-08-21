#include <iostream>
using namespace std;

class stack{
    int *arr;
    int *top;
    int *next;
    int n;
    int k;
    int free;
    public:
    stack(int k,int n){
        arr = new int[n];
        next = new int[n];
        top= new int[k];
        free=0;

        for(int i=0;i<k;i++){
            top[i]=-1;
        }

        for(int i=0;i<n;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }

    void push(int data,int k){
        int i = free;
        free = next[i];
        next[i] = top[k];
        top[k] = i;
        arr[i] = data;
    }

    int pop(int k){
        int i = top[k];
        top[k] = next[i];
        next[i] = free;
        free=i;
        return arr[i];
    }

};

int main() { 
    int k = 3, n = 10; 
    stack ks(k, n); 
  
    ks.push(15, 2); 
    ks.push(45, 2); 
   
    ks.push(17, 1); 
    ks.push(49, 1); 
    ks.push(39, 1); 
   
    ks.push(11, 0); 
    ks.push(9, 0); 
    ks.push(7, 0); 
  
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl; 
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl; 
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl; 
  
    return 0; 
}


