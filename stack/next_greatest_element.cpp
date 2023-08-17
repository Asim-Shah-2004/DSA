#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int arr[],int n){
    stack <int> st;
    int temp[n]; //to print op in correct order
    st.push(arr[n-1]);
    temp[0] = -1;
    for(int i=n-2,j=1;i>=0;i--,j++){
        while(st.empty()==false && st.top()<=arr[i]){
            st.pop();
        }
        int element = st.empty()?-1:st.top();
        temp[j]=element;
        st.push(arr[i]);
    }

    for(int k=n-1;k>=0;k--){
        cout<<temp[k]<<" ";
    }

}

int main(){
    int arr[] = {5,15,10,8,6,12,9,18};
    nextGreater(arr,8);
}
