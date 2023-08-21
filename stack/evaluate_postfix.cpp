#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isOperator(char ch){
    return ch=='+' || ch=='-' || ch=='*' || ch=='/' ;
}

int evaluate(string postfix){
    stack <int> st;
    for(int i=0;i<postfix.length();i++){
        if(!isOperator(postfix[i])){
            string temp = "";
            temp+=postfix[i];
            st.push(stoi(temp));
            temp="";
        }else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (postfix[i]){
                case '+':
                    st.push(val2+val1);
                    break;
                case '-':
                    st.push(val2-val1);
                    break;
                case '*':
                    st.push(val2*val1);
                    break;
                case '/':
                    st.push(val2/val1);
                    break;
            }
        }
    }

    return st.top();
}


int main()
{
    string exp = "231*+9-";
    cout << "postfix evaluation: " << evaluate(exp);
    return 0;
}
