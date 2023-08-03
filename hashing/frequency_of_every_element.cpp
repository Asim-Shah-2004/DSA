#include <iostream>
#include <unordered_map>
using namespace std;

void count(int arr[],int n){
    unordered_map<int ,int> h;
    for(int i=0;i<n;i++){
        if(h.count(arr[i])){
            h[arr[i]]++;
        }else{
            h[arr[i]]=1;
        }
    }

    for(auto it=h.begin();it!=h.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }   
}

int main(){
    int arr[] = {1,2,3,4,1,2,3,4,1,2,3,4};
    count(arr,12);
}
