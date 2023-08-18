#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char ch){
    if(ch=='('){
        return 1;
    }else if(ch=='+'||ch=='-'){
        return 2;
    }else if(ch=='*'||ch=='/'){
        return 3;
    }else if(ch=='^'){
        return 4;
    }
}

string infix_to_postfix(string infix){
    string postfix;
    stack <char> st;
    for(int i=0;i<infix.length();i++){  
        if(infix[i]=='('){
            st.push(infix[i]);
        }else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^'){
            while(!st.empty() && precedence(st.top())>=precedence(infix[i])){
                postfix+=st.top();
                st.pop();
            }
            st.push(infix[i]);
        }else if(infix[i]==')'){
            while(st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        }else{
            postfix+=infix[i];
        }
    }

    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}

int main(){
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<infix_to_postfix(infix);
    return 0;
}
