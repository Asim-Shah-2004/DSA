#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

void distinct(int arr[],int n,int k){
    unordered_map <int,int> map;
    for(int i=0;i<k;i++){
        map[arr[i]]++;
    }

    cout<<map.size()<<" ";

    for(int i=k;i<n;i++){
        map[arr[i-k]]--;
        if(map[arr[i-k]]==0){
            map.erase(arr[i-k]);
        }

        map[arr[i]]++;

        cout<<map.size()<<" ";
    }   

}

int main(){
    int a[] = {10,10,20,20,30,40,40};
    distinct(a,7,2);
}


