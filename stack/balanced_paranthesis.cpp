#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cout << "Enter input" << endl;
    string input;
    cin>>input;
    stack<char> st;
    int flag = 1;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(' || input[i] == '{' || input[i] == '[') {
            st.push(input[i]);
        } else {
            if (st.empty()) { // Check for unmatched closing bracket
                cout << "the parentheses/brackets are not balanced" << endl;
                flag = 0;
                break;
            }
            if (input[i] == ')' && st.top() != '(') {
                cout << "the parentheses/brackets are not balanced" << endl;
                flag = 0;
                break;
            } else if (input[i] == '}' && st.top() != '{') {
                cout << "the parentheses/brackets are not balanced" << endl;
                flag = 0;
                break;
            } else if (input[i] == ']' && st.top() != '[') {
                cout << "the parentheses/brackets are not balanced" << endl;
                flag = 0;
                break;
            }
            st.pop();
        }
    }

    if (!st.empty()) { // Check for unmatched opening bracket
        cout << "the parentheses/brackets are not balanced" << endl;
        flag = 0;
    }

    if (flag) {
        cout << "the parentheses/brackets are balanced" << endl;
    }

    return 0;
}
