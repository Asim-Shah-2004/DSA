#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    if(ch=='+'||ch=='-'){
        return 1;
    }else if(ch=='*' || ch=='/'){
        return 2;
    }else if(ch=='^'){
        return 3;
    }else{
        return 4;
    }
}

string reverse(string str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

bool isOperator(char ch){
    return ch=='+' ||ch=='-' || ch=='*' ||ch=='/' ||ch=='^';
}

string infix_to_prefix(string infix){
    string prefix;
    stack <char> st;
    for(int i=infix.length()-1;i>=0;i--){
        if(infix[i]==')'){
            st.push(infix[i]);
        }else if(isOperator(infix[i])){
            while(!st.empty() && st.top()!=')' && (precedence(st.top())>=precedence(infix[i]))){
                prefix+=st.top();
                st.pop();
            }
            st.push(infix[i]);
        }else if(infix[i]=='('){
            while(st.top()!=')'){
                prefix+=st.top();
                st.pop();
            }
            st.pop();
        }else{
            prefix+=infix[i];
        }        
    }

    while(!st.empty()){
        prefix+=st.top();
        st.pop();
    }

    return reverse(prefix);
}

int main()
{
	string s  = "(A-B/C)*(A/K-L)";;
	cout << infix_to_prefix(s);
	return 0;
}
