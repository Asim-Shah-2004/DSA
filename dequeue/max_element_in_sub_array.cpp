#include <iostream>
#include <deque>
using namespace std;

void max_element(int data[],int n,int k){
    
    deque <int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() && data[i]>=data[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i=k;i<n;i++){
        cout<<data[dq.front()]<<" ";
        
        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }

        while(!dq.empty() && data[i]>=data[dq.back()]){
            dq.pop_back();
        }

        dq.push_back(i);
    }
    cout<<dq.front()<<" ";
}


int main(){
	int arr[] = {20,5,3,8,6,15}, n = 6;
    int k = 4;
    
    max_element(arr, n, k);
    
	return 0;
}
