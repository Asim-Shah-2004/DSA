#include <iostream>
#include <stack>
using namespace std;

void stock_span(int arr[],int n){
    stack <int> st;
    st.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        int span = st.empty()?(i+1):i-st.top();
        cout<<span<<" ";
        st.push(i);
    }
}

int main(){
    int data[] = {13,15,12,14,16,8,6,4,10,30};
    stock_span(data,10);
    return 0;
}
