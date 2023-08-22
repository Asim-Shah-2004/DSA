#include <iostream>
#include <queue>
using namespace std;
class stack{
    
    queue <int> q1,q2;

    public:

    int top(){
        return q1.front();
    }

    void pop(){
        q1.pop();
    }

    int size(){
        return q1.size();
    }

    void push(int data){
        while(!q1.empty()){
            q2.push(top());
            pop();
        }
        q1.push(data);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main(){

	stack s; 
	s.push(10); 
	s.push(5); 
	s.push(15); 
	s.push(20);

	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 

	cout << "current size: " <<  s.size() << endl; 
	return 0; 

}
