#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int area(int data[],int n){
    stack <int> st;
    int res=0;
    for(int i=0;i<n;i++){
        while(!st.empty() && data[st.top()]>=data[i]){
            int x = st.top();
            st.pop();
            int curr = data[x] *(st.empty()?i:(i-st.top()-1));
            res = max(res,curr);
        }
        st.push(i);
    }

    //processing rest of the elements
    while(!st.empty()){
            int x = st.top();
            st.pop();
            int curr = data[x] *(st.empty()?n:(n-st.top()-1));
            res = max(res,curr);
    }

    return res;

}

int main(){
    int data[] = {6,2,5,4,1,5,6};
    cout<<"the max area of histogram is "<<area(data,7);
}
