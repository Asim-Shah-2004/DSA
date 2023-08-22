#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverse(queue<int> &q){
    if(q.empty()){
        return;
    }
    int res = q.front();
    q.pop();
    reverse(q);
    q.push(res);
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    reverse(q);
    print(q);
    return 0;
}
