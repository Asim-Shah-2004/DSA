#include <iostream>
#include <stack>
using namespace std;

void prevGreater(int arr[],int n){
    stack <int> st;
    st.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(st.empty()==false && st.top()<=arr[i]){
            st.pop();
        }
        int element = st.empty()?-1:st.top();
        cout<<element<<" ";
        st.push(arr[i]);
    }
}

int main(){
    int arr[] = {15,10,18,12,4,6,2,8};
    prevGreater(arr,8);
}
