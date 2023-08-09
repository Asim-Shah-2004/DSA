#include <iostream>
#include <unordered_map>
using namespace std;

//this is an extension of moores voting algorithm
//we use the fact that (map size<k-1)
void occurence(int arr[],int n,int k){

    //phase 1 selection of candidate
    unordered_map <int,int> map;
    for(int i=0;i<n;i++){
        if(map.count(arr[i])){
            map[arr[i]]++;
        }else if(map.size()<k-1){
            map[arr[i]]=1;
        }else{
            for(auto it:map){
                it.second--;
                if(it.second==0){
                    map.erase(it.first);
                }
            }
        }
    }

    //phase 2 printing
    for(auto it:map){
        int count=0;
        for(int i=0;i<n;i++){
            if(it.first==arr[i]){
                count++;
            }
        }
        if(count>(n/k)){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    int arr[] = {1,2,3,3,3,2,1,3,3};
    occurence(arr,9,3);
    return 0;
}

