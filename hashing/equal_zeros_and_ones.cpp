
#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

int zeros_ones(int arr[],int n){

//first convert zeros to -1 in the given array

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }

        //now find longest sub array with sum 0
        unordered_map <int,int> map;
        int p_sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            p_sum+=arr[i];
            if(p_sum==0){
                res=i+1;
            }else if(map.count(p_sum)){
                res = max(res,i-map[p_sum]);
            }else{
                map.insert({p_sum,i});
            }
        }

        return res;
    
}

int main(){
    int arr[] = {1,0,1,1,1,0,0};
    cout<<"The longest sub array with equal zeros and ones is "<<zeros_ones(arr,7);
}
