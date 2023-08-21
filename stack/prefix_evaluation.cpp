#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch=='/';
}

int evaluate(string prefix){
    stack <int> st;
    for(int i=prefix.length()-1;i>=0;i--){
        if(!isOperator(prefix[i])){
            string temp = "";
            temp+=prefix[i];
            st.push(stoi(temp));
            temp="";
        }else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (prefix[i]){
            case '+':
                st.push(val1+val2);
                break;
            case '-':
                st.push(val1-val2);
                break;
            case '*':
                st.push(val1*val2);
                break;
            case '/':
                st.push(val1/val2);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main(){
    string exprsn = "+9*26";
    cout << evaluate(exprsn) << endl;
    return 0;
}
